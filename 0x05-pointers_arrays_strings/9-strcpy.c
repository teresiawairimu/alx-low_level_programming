#include "main.h"

/**
 * _strcpy - copies the string pointed to by src to the buffer pointed by dest
 * including the terminating null byte
 * @dest: function parameter
 * @src: function parameter
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int n = 0;

	while (src[n] != '\0')
	{
		dest[n] = src[n];
		n++;
	}
	dest[n] = '\0';
	return (dest);
}
