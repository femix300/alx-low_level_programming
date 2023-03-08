#include "main.h"

/**
 * _sqrt_helper - calculates the square root of a number using recursion
 * @n: the number to calculate the square root of
 * @i: the current guess for the square root
 * @j: the original number
 *
 * Return: the square root of n or -1 if n does not have a natural square root
 */
int _sqrt_helper(int n, int i, int j)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (_sqrt_helper(n, i + 1, j));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to calculate the square root of
 *
 * Return: the square root of n or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_helper(n, 1, n));
}
