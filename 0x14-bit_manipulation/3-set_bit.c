#include"main.h"
/**
* set_bit - sets the value of a bit to 1 at a given index
* @n: the number
* @index: the index, starting from 0 of the bit you want to set
* Return: 1 if it worked, or -1 if an error occurred
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > 64)
		return (-1);

	for (i = 1; index > 0; index--, i *= 2)
		;

	*n += i;

	return (1);
}
