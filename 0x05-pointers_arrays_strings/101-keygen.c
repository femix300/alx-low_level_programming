#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates a random password for 101-crackme
 *
 * Return: Always 0
 */
int main(void)
{
	int pass[100];
	int i, sum, n;

	srand(time(NULL));

	for (i = 0, sum = 0; sum < (2772 - 126); i++)
	{
		pass[i] = rand() % 94 + 32;
		sum += pass[i];
		putchar(pass[i]);
	}

	n = 2772 - sum;
	putchar(n);

	putchar('\n');

	return (0);
}

