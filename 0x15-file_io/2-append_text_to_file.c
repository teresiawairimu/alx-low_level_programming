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
 * append_text_to_file - Appends text to the end of a file.
 * @filename: File to append.
 * @text_content: Information to append to the file.
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t no_letters;
	int file;

	if (!filename)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		no_letters = write(file, text_content, _strlen(text_content));
		if (no_letters == -1)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}
