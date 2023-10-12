#include "search_algos.h"

/**
 * interpolation_search -  searches for a value in a sorted array of integers
 * using the Interpolation search algorithm
 * @array: the array to be searched
 * @size: the size of the array
 * @value: the value to be searched for
 * Return: the index of the value if found,
 * or -1 if the value wans't found or the array is null
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, pos;
	double f;

	if (array == NULL || !array)
		return (-1);

	low = 0;
	high = size - 1;

	f = (double)(high - low) / (array[high] - array[low]);
	f *= (value - array[low]);
	pos = low + (size_t)f;

	if (pos >= size)
	{
		printf("Value checked array[%ld] is out of range\n", pos);
	}

	while (value >= array[low] && value <= array[high] && low <= high)
	{
		f = (double)(high - low) / (array[high] - array[low]);
		f *= (value - array[low]);
		pos = low + (size_t)f;

		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);

		else if (array[pos] < value)
			low = pos + 1;
		else
		{
			high = pos - 1;
		}
	}
	return (-1);
}
