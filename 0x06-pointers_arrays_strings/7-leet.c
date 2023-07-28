#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: function parameter
 *
 * Return: pointer to the encoded string
 */
char *leet(char *str)
{
	int count1, count2;
	char n[] = "aAeEoOtT1L";
	char m[] = "4433007711";

	count1 = 0;
	while (str[count1] != '\0')
	{
		count2 = 0;
		while (count2 < 10)
		{
			if (n[count2] == str[count1])
			{
				str[count2] = m[count1];
			}
			count2++;
		}
		count1++;
	}
	return (str);
}

