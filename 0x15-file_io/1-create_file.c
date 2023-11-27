#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: Input character array.
 * Return: Length of the string.
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}

/**
 * create_file - Creates a file with specified content.
 * @filename: File to create.
 * @text_content: Information to write into the file.
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t n_letters;
	int file;

	if (!filename)
		return (1);
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		n_letters = write(file, text_content, _strlen(text_content));
		if (n_letters == -1)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}
