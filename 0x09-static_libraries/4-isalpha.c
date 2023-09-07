#include "main.h"

/**
 * _isalpha - checks for an alphabetic character
 * @c: its the single character that is checked
 *
 * Return: 1 if c is a letter, lowercase or uppercase or 0 otherwise
 */
int _isalpha(int c)
{
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        {
                return (1);
        }
        else
        {
                return (0);
        }
}

