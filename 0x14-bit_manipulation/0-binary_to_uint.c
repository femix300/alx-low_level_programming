#include "main.h"
/**
* binary_to_uint - converts a binary number to an unsigned int
* @b:  points to a string of 0 and 1 chars
* Return: the converted number or 0 if there are is one or more
* char in string b that is not 0 or 1 or if b is NULL
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum, expo;

	int len;

	len = 0;

	if (!b)
		return (0);

	for (len = 0; b[len]; len++)
	{
		if (b[len] != '1' && b[len] != '0')
			return (0);
	}

	for (expo = 1, sum = 0, len--; len >= 0; len--, expo *= 2)
	{
		if (b[len] == '1')
			sum += expo;
	}

	return (sum);
}
