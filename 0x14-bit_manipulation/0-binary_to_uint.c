#include "main.h"
/**
 * binary_to_uint - Convert binary string to unsigned int.
 * @b: Binary number as a string.
 * Return: Converted value.
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int decimal = 0;
int str_len = 0, base = 1;

if (!check_valid_string(b))
return (0);

while (b[str_len] != '\0')
str_len++;

while (str_len)
{
decimal += ((b[str_len - 1] - '0') * base);
base *= 2;
str_len--;
}
return (decimal);
}

/**
 * check_valid_string - Check if a string contains only 0's and 1's.
 * @b: String to be checked.
 * Return: 1 if valid, 0 otherwise.
 */
int check_valid_string(const char *b)
{
if (b == NULL)
return (0);

while (*b)
{
if (*b != '1' && *b != '0')
return (0);
b++;
}
return (1);
}
