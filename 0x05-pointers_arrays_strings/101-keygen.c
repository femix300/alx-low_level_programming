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
	int i, sum, diff;
	char password[100];

	srand(time(NULL));

	for (i = 0, sum = 0; sum < (2772 - 122); i++)
	{
		password[i] = rand() % 94 + 32;
		sum += password[i];
	}

	password[i] = 2772 - sum;
	password[++i] = '\0';

	diff = 0;
	for (i = 0; password[i]; i++)
	{
		diff += password[i];
		printf("%c", password[i]);
	}

	printf("%d\n", diff);

	return (0);
}

