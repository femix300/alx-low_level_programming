#include "main.h"
/**
* print_binary - prints the binary representation of a number
* @n: the number
*/

void print_binary(unsigned long int n)
{
	unsigned long int tmp;
	int change;

	tmp = n;
	change = 0;

	if (n == 0)
	{
		printf("0");
		return;
	}

	while (tmp > 0)
	{
		tmp >>= 1;
		change++;
	}

	for (change = sizeof(n) * 8 - 1; change >= 0; change--)
	{
		if ((n >> change) & 1)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
	}


}
