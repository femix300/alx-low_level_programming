#include <stdio.h>
/**
 * main - prints single digits from 0 to 10
 * Return: 0 (success)
 */
int main(void)
{
	int index;

	index = 0;

	while (index < 10)
	{
		printf("%d", index);
		index++;
	}
	putchar('\n');

	return (0);

}
