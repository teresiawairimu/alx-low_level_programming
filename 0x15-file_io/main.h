#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int _putchar(char);
void print_magic_(unsigned char *e_ident);
void print_class_(unsigned char *e_ident);
void print_data_(unsigned char *e_ident);
void print_version_(unsigned char *e_ident);
void print_osabi_(unsigned char *e_ident);
void print_type_(unsigned int e_type, unsigned char *e_ident);
void validate_elf(unsigned char *e_ident);
unsigned int lit_to_big_endian(unsigned int x);
void print_entry(unsigned int e_type, unsigned char *e_ident);

#endif
