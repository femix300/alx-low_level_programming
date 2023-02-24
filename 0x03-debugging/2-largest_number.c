#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest = a;

	if (b > largest)
	{
		largest = b;
	}

	if (c > largest)
	{
		largest = c;
	}

	if (a == b && b == c)
	{
		return (a);
	}
	else if (a == b && b > c)
	{
		return (b);
	}
	else if (a == c && c > b)
	{
		return (a);
	}
	else if (b == c && c > a)
	{
		return (b);
	}
	else
	{
		return (largest);
	}

}
