#include "main.h"
#include <stdlib.h>

/**
 * _atoi - Convert a string to an integer
 * @s: The string to convert
 *
 * Return: The converted integer
 */
int _atoi(char *s)
{
	int sign = 1, res = 0;
	char c;

	while (*s)
	{
		c = *s++;
		if (c == '-')
			sign = -sign;
		else if (c >= '0' && c <= '9')
			res = res * 10 + (c - '0');
		else if (res > 0)
			break;
	}

	return (res * sign);
}

