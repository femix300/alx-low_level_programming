#include <stdio.h>
/**
 * main- Print all possible single digit combinations
 * Return: 0 Always
 */
int main(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
	{
		putchar((digit % 10) + '0');

		if (digit == 9)
			continue;
		putchar(',');
		putchar(' ');

	}
	putchar('\n');

	return (0);
}
