#include <stdio.h>
/**
 * main- prints out the size of some basic c data typres
 * Return: 0(success)
 */
int main(void)
{
	int size_of_char = sizeof(char);

	printf("Size of a char: %d byte(s)\n", size_of_char);

	int size_of_int = sizeof(int);

	printf("Size of a long int: %d byte(s)\n", size_of_int);

	printf("Size of a long int: %ld byte(s)\n", sizeof(long int));

	printf("Size of a long long int: %ld byte(s)\n", sizeof(long long int));

	printf("Size of a float: %ld byte(s)\n", sizeof(float));
	return (0);
}
