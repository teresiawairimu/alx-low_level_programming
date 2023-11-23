#include "main.h"
/**
 * binary_to_uint - Converts a binary number represented as a string to an unsigned int.
 * @b: String containing the binary number.
 *
 * Return: The unsigned int representation of the binary number.
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int base_ten = 0;
int str_len = 0, base = 1;

if (!check_valid_string(b))
return (0);

while (b[str_len] != '\0')
str_len++;

while (str_len)
{
base_ten += ((b[str_len - 1] - '0') * base);
base *= 2;
str_len--;
}
return (base_ten);
}

/**
 * check_valid_string - Determines if a string consists solely of binary digits (0 and 1).
 * @b: String to be examined.
 *
 * Return: 1 if the string is valid binary; otherwise, returns 0.
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
