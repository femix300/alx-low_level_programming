#include "main.h"
/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed out
 */
void print_rev(char *s)
{
	int i, j, lenth;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	lenth = i;

	for (j = lenth - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');
}
