#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - Generate a key depending on a username for crackme5.
 * @argc: Number of arguments passed.
 * @argv: Arguments passed to main.
 *
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char *argv[])
{
	char *l = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char p[7] = "      ";
	size_t len, i;
	unsigned int hash;

	if (argc != 2)
	{
		printf("Correct usage: ./keygen5 username\n");
		return (1);
	}

	len = strlen(argv[1]);

	hash = 0;
	for (i = 0; i < len; i++)
	{
		hash += (unsigned int)argv[1][i];
		hash *= (unsigned int)argv[1][i];
	}

	srand((unsigned int)argv[1][0] ^ 14);

	p[0] = l[(len ^ 59) & 63];
	p[1] = l[(hash ^ 79) & 63];
	p[2] = l[(hash ^ 85) & 63];
	p[3] = l[rand() & 63];
	p[4] = l[(hash ^ 239) & 63];
	p[5] = l[(rand() ^ 229) & 63];

	printf("%s\n", p);

	return (0);
}

