#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
* main- adds positive numbers
* @argc: argument count
* @argv: argument vector
* Return: 0 (success) or 1 (fail)
*/

int main(int argc, char *argv[])
{
	int i, j, sum, x;

	sum = 0;
	x = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!(isdigit(argv[i][j])))
				{
					printf("Error\n");
					return (1);
				}
			}
			x = atoi(argv[i]);
			sum += x;
		}
		printf("%d\n", sum);
	}
	else
		printf("0\n");
	return (0);
}
