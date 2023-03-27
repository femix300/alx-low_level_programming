#include "variadic_functions.h"

/**
 * print_char - prints a character
 * @args: the va_list that contains the character to print
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - prints an integer
 * @args: the va_list that contains the integer to print
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - prints a float
 * @args: the va_list that contains the float to print
 */
void print_float(va_list args)
{
	printf("%f", (float)va_arg(args, double));
}

/**
 * print_string - prints a string
 * @args: the va_list that contains the string to print
 */
void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j;
	char *separator = "";

	print_t print[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (print[j].type)
		{
			if (format[i] == print[j].type)
			{
				printf("%s", separator);
				print[j].func(args);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}

	va_end(args);
	printf("\n");
}

