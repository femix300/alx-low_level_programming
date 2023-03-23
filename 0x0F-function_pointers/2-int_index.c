#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array using a comparison function
 * @array: pointer to the integer array to search in
 * @size: size of the array
 * @cmp: pointer to the comparison function to use
 *
 * Returns the index of the first element for which the comparison function
 * does not return 0, or -1 if no match is found or if `size` is negative.
 * Return: -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}

