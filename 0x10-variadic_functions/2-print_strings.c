#include "variadic_functions.h"
/**
* print_strings - print strings that are passed as arguments
* @separator: printed between the strings
* @n: number of arguments passed
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;

	va_start(args, n);

	unsigned int i;

	const char *str;

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, const char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(args);
}

