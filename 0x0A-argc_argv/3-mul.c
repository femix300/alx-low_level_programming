#include <stdio.h>
#include <stdlib.h>
/**
* main- multiplies two numbers
* @argc: argument count
* @argv: argument vector
* Return: 0 (success) or 1 (fail)
*/

int main(int argc, char *argv[])
{
	int result, x, y;

	result = 0;

	if (argc == 3)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		result = x * y;
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
