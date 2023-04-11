#include "main.h"
/**
* print_binary - prints the binary representation of a number
* @n: the number
*/

void print_binary(unsigned long int n)
{
	unsigned long int tmp;
	int change;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (tmp = n, change = 0; (temp >>= 1) > 0; change++)
		;

	for (; change >= 0; change--)
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
