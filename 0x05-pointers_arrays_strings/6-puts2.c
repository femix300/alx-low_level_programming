#include "main.h"
/**
 * puts2 - prints one char out of 2 of a string
 * followed by a new line
 * @str: string to print the chars from
 */
void puts2(char *str)
{
	int length, count;

	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	for (count = 0; count < length; count += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
