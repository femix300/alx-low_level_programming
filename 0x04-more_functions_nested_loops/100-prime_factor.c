#include <stdio.h>
/**
 * main - Finds and prints the largest prime
 *        factor of the number 612852475143.
 *
 * Return: Always 0.
 */
int main(void)
{
	long p = 612852475143, div;

	while (div < (p / 2))
	{
		if ((p % 2) == 0)
		{
			p /= 2;
			continue;
		}

		for (div = 3; div < (p / 2); div += 2)
		{
			if ((p % div) == 0)
				p /= div;
		}
	}

	printf("%ld\n", p);

	return (0);
}
