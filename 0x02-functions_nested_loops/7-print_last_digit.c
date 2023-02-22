#include "main.h"
/**
 * print_last_digit - prints thelast digit in a number
 * @n: number to be considered
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int ld;

	ld = n % 10;

	if (ld < 0)
	{
		ld *= -1;
	}

	_putchar(ld + '0');

	return (0);
}
