#include <stdio.h>
/**
 * main- print all possible different combinations of two digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ones, tens;

	for (tens = 0; tens <= 8; tens++)
	{
		for (ones = tens + 1; ones <= 9; ones++)
		{
			putchar(tens + '0');
			putchar(ones + '0');

			if (tens < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
