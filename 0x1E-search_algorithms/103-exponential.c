#include "search_algos.h"

/**
 * _binary_search - Searches for a value using binary search
 *
 * @array: the array to be searched
 * @start: the starting index of the array
 * @end: the ending index of the array
 * @value: the value that is being searched for
 * Return: the index of the value if found and -1 otherwise
 */
int _binary_search(int *array, size_t start, size_t end, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	while (end >= start)
	{
		printf("Searching in array: ");
		for (i = start; i < end; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = start + (end - start) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			end = i - 1;
		else
			start = i + 1;
	}

	return (-1);
}

/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 * @array: the array to be searched
 * @size: the size of the array
 * @value: the value to be searched for
 * Return: the index of the value or -1 otherwise
*/
int exponential_search(int *array, size_t size, int value)
{
	size_t i, start, end;

	i = start = end = 0;

	if (array == NULL || !array)
		return (-1);

	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i *= 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	start = i / 2;
	if (i >= size)
		end = size - 1;
	else
		end = i;

	printf("Value found between indexes [%ld] and [%ld]\n", start, end);
	return (_binary_search(array, start, end, value));

}
