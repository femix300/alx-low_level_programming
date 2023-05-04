#include "main.h"

/**
* get_bit - gives the value of a bit at a given index
* @n: the number
* @index: the index of the bit we want to get starting form 0
* Return: the value of the bit at the index and -1 otherwise
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int store;

	store = 0;

	if (index > 64)
		return (-1);

	store = n >> index;

	return (store & 1);
}
