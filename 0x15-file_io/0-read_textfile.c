#include "main.h"

/**
 * read_textfile - Reads and prints a specified number of letters from a file.
 * @filename: File name.
 * @letters: Number of letters to print.
 * Return: Number of letters printed.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t n_letters;
	int file;
	char *text;

	if (!filename)
		return (0);
	text = malloc(sizeof(char) * letters + 1);
	if (text == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(text);
		return (0);
	}
	n_letters = read(file, text, sizeof(char) * letters);
	if (n_letters == -1)
	{
		free(text);
		close(file);
		return (0);
	}
	n_letters = write(STDOUT_FILENO, text, n_letters);
	if (n_letters == -1)
	{
		free(text);
		close(file);
		return (0);
	}
	free(text);
	close(file);
	return (n_letters);
}
