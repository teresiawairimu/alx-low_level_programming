#include "main.h"

/**
 * main - Copies information from source_file to destination_file.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
	int source_file, destination_file;
	ssize_t  bytes_read = 1024, bytes_written, close_result;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp source_file destination_file\n");
		exit(97);
	}

	source_file = open(argv[1], O_RDONLY);
	if (source_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	destination_file = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (destination_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	while (bytes_read == 1024)
	{
		bytes_read = read(source_file, buffer, 1024);
		if (bytes_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}

		bytes_written = write(destination_file, buffer, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	close_result = close(source_file);
	if (close_result == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd  %d\n", source_file);
		exit(100);
	}

	close_result = close(destination_file);
	if (close_result == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd  %d\n", destination_file);
		exit(100);
	}

	return (0);
}

