#include "main.h"
/**
 * _abs - prints the absolute value of an integer
 * @n: integer whoose absolute value is to be found
 * Return: The absolute value
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = -n;
	}

	return (n);
}
