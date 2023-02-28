#include "main.h"
#include <limits.h>

/**
 * _atoi - Convert a string to an integer
 * @s: The string to convert
 *
 * Return: The converted integer
 */
int _atoi(char *s)
{
	int sign = 1, res = 0, digit;

	while (*s)
	{
		if (*s == '-')
			sign = -1;

		if (*s >= '0' && *s <= '9')
		{
			digit = *s - '0';

			if (res > INT_MAX / 10 || (res == INT_MAX / 10 && digit > INT_MAX % 10))
			{
				if (sign == 1)
					return (INT_MAX);
				else
					return (INT_MIN);
			}

			res = res * 10 + digit;
		}
		else if (res > 0)
		{
			break;
		}

		s++;
	}

	return (res * sign);
}

