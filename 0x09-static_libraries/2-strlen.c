#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: function parameter
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
        int n;

        for (n = 0; *s != '\0'; n++)
        {
                s++;
        }
        return (n);
}

