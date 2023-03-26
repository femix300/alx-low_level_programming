#include <stdarg.h>
#include "variadic_functions.h"

/**
* sum_them_all - A function that sums numbers
* it takes a variable number of arguments
* @n: number of arguments taken
* Return: sum
*/

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);

	va_list arg_p;

	int i, sum;

	sum = 0;

	va_start(arg_p, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(arg_p, const unsigned int);
	}

	va_end(arg_p);

	return (sum);
}
