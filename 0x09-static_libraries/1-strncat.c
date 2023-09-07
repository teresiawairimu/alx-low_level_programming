#include "main.h"

/**
 * _strncat - concatenates two strings
 * uses at most n bytes from src
 * src does not need to be null-terminated if it contains n or more bytes
 * @dest: function parameter
 * @src: function parameter
 * @n: function parameter
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
        char *finalDest = dest;
        /* find the end of the dest string */
        while (*dest != '\0')
        {
                dest++;
        }
        /*append the src string to dest */
        while (*src != '\0' && n > 0)
        {
                *dest = *src;
                dest++;
                src++;
                n--;
        }
        *dest = '\0';
        return (finalDest);
}
