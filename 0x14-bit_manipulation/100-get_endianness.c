#include "main.h"
/**
* get_endianness - function that checks the endianness
* Return: 0 if big endian, 1 if little endian
*/
int get_endianness(void)
{
	int x;

	x = 1;

	if (*(char *)&x == 1)
		return (1);

	return (0);
}
