/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find the square root of
 *
 * Return: the natural square root of n, or -1 if n does not have a
 * natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (n);

	return (_sqrt_helper(n, 1, n));
}

/**
 * _sqrt_helper - recursively finds the natural square root of a number
 * @n: the number to find the square root of
 * @start: the lower bound of the search range
 * @end: the upper bound of the search range
 *
 * Return: the natural square root of n, or -1 if n does not have a
 * natural square root within the range [start, end]
 */
int _sqrt_helper(int n, int start, int end)
{
	int mid = (start + end) / 2;

	if (mid * mid == n)
		return (mid);

	if (start >= end)
		return (-1);

	if (mid * mid > n)
		return (_sqrt_helper(n, start, mid - 1));

	return (_sqrt_helper(n, mid + 1, end));
}
