#include "main.h"
/**
* clear_bit - sets the value of a bit to 0 at a given index
* @n: pointer to the decimal number
* @index: the index, starting from 0 of the bit you want to set
* Return: 1 if it worked, or -1 if an error occurred
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x, store;

	if (index > 64)
		return (-1);

	store = index;

	for (x = 1; store > 0; x *= 2, store--)
		;

	if ((*n >> index) & 1)
		*n -= x;

	return (1);
}
