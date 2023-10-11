#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers
 * using the Linear search algorithm
 * @array: the array to be searched
 * @size: the size of the array
 * @value: the value to be seaarched for
 * Return: The first index where value is located or -1 if array
 * is null or value is not present
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	i = 0;

	if (array == NULL || !array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
