#include <stdio.h>
/**
 * main - prints the alphabet in lower and upper case
 * Return: 0 (sucess)
 */
int main(void)
{
	char l;

	l = 'a';

	while (l <= 'z')
	{
		putchar(l);
		l++;
	}

	l = 'A';
	while (l <= 'Z')
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}
