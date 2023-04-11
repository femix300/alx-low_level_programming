#include "main.h"
/**
* flip_bits - returns the number of bits you would
* need to flip to get from one number to another
* @n: first number
* @m: second number
* Return: number of bits needed
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int uniq;

	int i;

	uniq = n ^ m;

	for (i = 0; uniq != 0; i++)
	{
		uniq &= (uniq - 1);
	}

	return (i);

}
