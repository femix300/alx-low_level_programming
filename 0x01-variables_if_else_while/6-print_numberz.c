#include <stdio.h>
/**
 * main- print 0 to 9
 * Return: 0 (sucess)
 */
int main(void)
{
	int index;

	index = 0;

	while (index < 10)
	{
		putchar(index + '0');
		index++;
	}
	putchar('\n');

	return (0);
}
