#include <stdio.h>
/**
* main- prints all arguments recieved in the command line
* @argc: argument count
* @argv: argumen vector @argc: argument count
* Return: 0 always (sucess)
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
