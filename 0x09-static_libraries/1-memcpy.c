#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: memory area where the bytes will be copied
 * @src: memory area where the bytes will be copied from
 * @n: the bytes to be copied
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
        unsigned int i;

        for (i = 0; i < n; i++)
        {
                dest[i] = src[i];
        }
        return (dest);
}

