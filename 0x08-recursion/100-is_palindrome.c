#include "main.h"
#include <stdio.h>

/**
 * check_palindrome - checks whether a string is a palindrome
 * @s: input string
 * @starting_index: starting index
 * @ending_index: ending index
 *
 * Return: 1 if the string is a palindrome and 0 if not
 */
int check_palindrome(char *s, int starting_index, int ending_index)
{
	if (starting_index >= ending_index)
		return (1);
	if (s[starting_index] != s[ending_index])
		return (0);
	return (check_palindrome(s, starting_index + 1, ending_index - 1));
}


 /**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: the input string
 *
 * Return: 1 if the string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);

	if (length <= 1)
		return (1);
	return (check_palindrome(s, 0, length - 1));
}

	
