#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: function parameter (the first string)
 * @s2: function parameter (the second string)
 *
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
        int n = 0;
        /*compare characters from the two strings*/
        while (s1[n] != '\0' && s2[n] != '\0' && s1[n] == s2[n])
        {
                n++;
        }
        return (s1[n] - s2[n]);
}

