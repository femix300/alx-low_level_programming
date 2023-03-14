#include <stdio.h>
/**
* main- prints the name of a program
* @argc: length of command line arguments
* @argv: pointer to an array of pointers
* Return: 0 always (success)
*/
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
