#include "main.h"

/**
 * argstostr - A function that combines all the program's arguments into a single string.
 * @ac: The count of arguments passed to the function.
 * @av: An array of arguments.
 *
 * Return: This function returns a pointer to the new concatenated string.
 */

char *argstostr(int ac, char **av)
{
		char *new_string = NULL;
		int k = 0, i = ac, j, sum = 0, temp = 0;

		if (ac == 0 || av == NULL)
			return (NULL);

		while (ac--)
			sum += (len(av[ac]) + 1);
		new_string = (char *) malloc(sum + 1);

		if (new_string != NULL)
		{
			while (k < i)
			{
				for (j = 0; av[k][j] != '\0'; j++)
					new_string[j + temp] = av[k][j];
				new_string[temp + j] = '\n';
				temp += (j + 1);
				k++;
			}
			new_string[temp] = '\0';
		}
		else
		{
			return (NULL);
		}
		return (new_string);
}

/**
 * len - Computes the length of a string.
 * @str: The string to be measured.
 *
 * Return: The function returns the length of the string.
 */

int len(char *str)
{
		int len = 0;

		if (str != NULL)
		{
			while (str[len])
				len++;
		}
	return (len);
}

