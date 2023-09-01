#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: function parameter (destination buffer)
 * @src: function parameter (source string)
 * @n: function parameter (maximum number of characters to copy)
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
        int m = 0;

        /* copy characters */
        while (m < n && src[m] != '\0')
        {
                dest[m] = src[m];
                m++;
        }
        /*add null terminator */
        while (m < n)
        {
                dest[m] = '\0';
                m++;
        }
        return (dest);
}

