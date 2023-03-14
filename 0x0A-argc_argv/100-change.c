#include <stdio.h>
#include <stdlib.h>
/**
* main- prints the minimum number of coins to make change for amount of money
* @argc: argument count
* @argv: argument vector
* Return: 1 or 0
*/
int main(int argc, char *argv[])
{
	int cents, i, num_coins;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	num_coins = 0;
	for (i = 0; cents > 0 && i < 5; i++)
	{
		num_coins += cents / coins[i];
		cents %= coins[i];
	}

	printf("%d\n", num_coins);
	return (0);
}

