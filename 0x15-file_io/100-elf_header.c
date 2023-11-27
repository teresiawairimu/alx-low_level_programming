#include "main.h"
/**
 * main - Displays contents of an ELF header.
 * @argc: Argument count.
 * @argv: Argument vector.
 * Description: Usage: ./elf_header elf_file
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int f_d, read_l_, c;
	Elf64_Ehdr *header;

	if (argc != 2)
	{dprintf(STDERR_FILENO, "Usage: ./elf_header elf_file\n");
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		dprintf(STDERR_FILENO, "Error in memory allocation\n");
		exit(98);
	}
	f_d = open(argv[1], O_RDONLY);
	if (f_d == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", argv[1]);
		exit(98);
	}
	read_l_ = read(f_d, header, sizeof(Elf64_Ehdr));
	if (read_l_ == -1)
	{
		dprintf(STDERR_FILENO, "Can't read file %s\n", argv[1]);
		exit(98);
	}
	validate_elf(header->e_ident);
	print_magic_(header->e_ident);
	print_class_(header->e_ident);
	print_data_(header->e_ident);
	print_version_(header->e_ident);
	print_osabi_(header->e_ident);
	printf("  ABI Version:                       ");
	printf("%i\n", header->e_ident[EI_ABIVERSION]);
	print_type_(header->e_type, header->e_ident);
	print_entry(header->e_entry, header->e_ident);
	free(header);
	c = close(f_d);
	if (c)
		dprintf(STDERR_FILENO, "Error: Can't close fd\n"), exit(98);
	return (0);
}
/**
 * elf_validation - Validates if a file is in ELF format.
 * @e_ident: File descriptor.
 */
void validate_elf(unsigned char *e_ident)
{
	if (e_ident[0] == 0x7f && e_ident[1] == 'E' && e_ident[2] == 'L' && e_ident[3] == 'F')
	{
		printf("ELF Header:\n");
	}
	else
	{
		dprintf(STDERR_FILENO, "Error: File not an ELF\n");
		exit(98);
	}
}
/**
 * print_magic - Prints the magic number of an ELF file.
 * @e_ident: File description.
 */
void print_magic_(unsigned char *e_ident)
{
	int i;

	printf("  Magic:   ");
	i = 0;
	while (i < EI_NIDENT - 1)
	{
		printf("%02x ", e_ident[i]);
		i++;
	}
	printf("%02x\n", e_ident[i]);
}
/**
 * print_class - Prints the class of an ELF file.
 * @e_ident: Pointer to string.
 */
void print_class_(unsigned char *e_ident)
{
	printf("  Class:                             ");
	switch (e_ident[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("This class is invalid\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}
/**
 * print_data - Prints the data format of an ELF file.
 * @e_ident: Pointer to string.
 */
void print_data_(unsigned char *e_ident)
{
	printf("  Data:                              ");
	switch (e_ident[EI_DATA])
	{
	case ELFDATANONE:
		printf("Unknown data format\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_DATA]);
	}
}
/**
 * print_version - Prints the version of an ELF file.
 * @e_ident: String pointer.
 */
void print_version_(unsigned char *e_ident)
{
	printf("  Version:                           ");
	if (e_ident[EI_VERSION] == EV_CURRENT)
		printf("%i (current)\n", EV_CURRENT);
	else
		printf("%i\n", e_ident[EI_VERSION]);
}
/**
 * print_osabi - Prints the OSABI of an ELF file.
 * @e_ident: String pointer.
 */
void print_osabi_(unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");
	switch (e_ident[EI_OSABI])
	{
	case ELFOSABI_SYSV:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}
/**
 * print_type - Prints the type of an ELF file.
 * @e_type: Status integer.
 * @e_ident: Pointer to string.
 */
void print_type_(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type = e_type >> 8;

	printf("  Type:                              ");
	switch (e_type)
	{
	case ET_NONE:
		printf("NONE (Unknown type)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", e_type);
	}
}
/**
 * print_entry - Prints the entry address of an ELF file.
 * @e_entry: Entry address.
 * @e_ident: Pointer to char string.
 */
void print_entry(unsigned int e_entry, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_entry = lit_to_big_endian(e_entry);

	printf("  Entry point address:               ");
	printf("%#x\n", (unsigned int)e_entry);
}
/**
 * lit_to_big_endian - Converts hex values from little endian to big endian.
 * @x: Integer to convert.
 * Return: Value as unsigned int.
 */
unsigned int lit_to_big_endian(unsigned int x)
{
	return (((x >> 24) & 0x000000ff) |
		((x >> 8) & 0x0000ff00)  |
		((x << 8) & 0x00ff0000)  |
		((x << 24) & 0xff000000));
}
