#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description - this program generates random valid passwords
 *
 * Return: 0
 */
int main(void)
{
	int n, m;

	srand(time(NULL));
	m = 0;
	for (; m <= 2645; m += n)
	{
		n = (rand() % 128);
		printf("%c", n);
	}
	printf("%c", 2772 - m);
	return (0);
}
