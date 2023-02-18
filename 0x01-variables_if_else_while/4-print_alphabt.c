#include <stdio.h>
/**
 * main- prints the alphabet in lowercase omitting q and e
 * Return: 0 (success)
 */
int main(void)
{
	char l;

	l = 'a';

	while (l <= 'z')
	{
		if (l != 'q' && l != 'e')
		{
			putchar(l);
		}
		l++;
	}
	putchar('\n');

	return (0);

}
