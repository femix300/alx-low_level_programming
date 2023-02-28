#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i = 0;
	int num_digits = 0;
	int num_signs = 0;
	int digit = 0;
	int sign = 1;
	int result = 0;

	while (s[num_digits] != '\0')
	{
		if (s[num_digits] >= '0' && s[num_digits] <= '9')
			break;
		if (s[num_digits] == '-')
			num_signs++;
		num_digits++;
	}

	if (num_signs % 2 == 1)
		sign = -1;

	for (i = num_digits; s[i] != '\0'; i++)
	{
		if (s[i] < '0' || s[i] > '9')
			break;
		digit = s[i] - '0';
		result = result * 10 + digit;
	}

	return (result * sign);
}

