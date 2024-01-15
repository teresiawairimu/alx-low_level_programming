#include "main.h"

/**
 * _islower - checks if a character is lowercase or not.
 * @c: it is the single character used in the _islower function
 *
 * Return: 1 if lowercase or 0 otherwise
 */
int _islower(int c)
{
        if (c >= 'a' && c <= 'z')
        {
                return (1);
        }
        else
        {
                return (0);
        }
}
