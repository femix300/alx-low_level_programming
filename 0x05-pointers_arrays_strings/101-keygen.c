#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char password[7];
	int i, ascii_value;

	srand(time(0));

	for (i = 0; i < 7; i++)
	{
		ascii_value = rand() % 94 + 33;

		if (ascii_value == 32)
			ascii_value++;

		password[i] = (char)ascii_value;
	}

	password[i] = '\0';

	printf("%s", password);

	return (0);
}

