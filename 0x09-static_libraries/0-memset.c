#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: points to a memory area
 * @b: the constant to be filled
 * @n: the bytes of memory to be filled
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
        unsigned int m = 0;

        while (m < n)
        {
                s[m] = b;
                m++;
        }
        return (s);
} 
