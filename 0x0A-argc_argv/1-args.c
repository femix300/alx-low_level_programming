#include <stdio.h>
/**
* main- prints the number of command line arguments passed
* @argc: argument count
* @argv: argument vector
* Return: 0 always (success)
*/

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
