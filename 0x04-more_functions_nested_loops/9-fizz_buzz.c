#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 * Description - prints numbers 1 to 100
 * followed by a new line
 * but for multiples of 3 print Fizz
 * and multiples of five print Buzz
 * for both multiples of 3 and 5 print FizzBuzz
 *
 * Return: Always 0
 */
int main(void)
{
	int n;
	char fizz[] = "Fizz";
	char buzz[] = "Buzz";
	char fizzbuzz[] = {'F', 'i', 'z', 'z', 'B', 'u', 'z', 'z', '\0'};

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0)
		{
			printf("%s ", fizz);
		}
		else if (n % 5 == 0)
		{
			printf("%s ", buzz);
		}
		else if (n % 3 == 0 && n % 5 == 0)
		{
			printf("%s ", fizzbuzz);
		}
		else
		{
			printf("%d ", n);
		}
	}
	printf("\n");
	return (0);
}
