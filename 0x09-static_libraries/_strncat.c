#include "main.h"

/**
 * _strcat - concatenates two strings
 * appends the src string to the dest string
 * overwriting the terminating null byte(\0) at the end of dest
 * adds a terminating null byte
 * @dest: function parameter
 * @src: function parameter
 *
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
        char *finalDest = dest;

        /* find the end of dest */
        while (*dest != '\0')
        {
                dest++;
        }
        /* Append the src string to dest */
        while (*src != '\0')
	{
                *dest = *src;
                dest++;
                src++;
        }
        /* add the null terminator to the concatenated string */
        *dest = '\0';
        return (finalDest);
}
