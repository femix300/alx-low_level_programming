#include "search_algos.h"
/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: the array to be searched
 * @size: the size of the array
 * @value: the value to be searched for
 * Return: the index where the value is located if found or
 * -1 if the value wasn't found or the array is null
*/

int jump_search(int *array, size_t size, int value)
{
	int start, jump = 0;
	size_t i, end;

	i = 0;
	start = 0;
	end = 0;

	if (array == NULL || !array)
		return (-1);

	jump = sqrt(size);

	for (i = 0; i < size && array[i] < value; i += jump)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		start = i;

	}
	printf("Value found between indexes [%d] and [%ld]\n", start, i);
	end = i;
	for (i = start; i <= end && i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
