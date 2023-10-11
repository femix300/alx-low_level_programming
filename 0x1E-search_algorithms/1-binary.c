#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search
 * @array: the array to be searched
 * @size: the size of the array
 * @value: the value to be searched for
 * Return: the index of the value
 * or -1 if the value wasn't foud or the array is null
*/

int binary_search(int *array, size_t size, int value)
{
	int left, right, mid, i;

	if (array == NULL || !array)
		return (-1);

	left = 0;
	right = size - 1;

	while (left < right)
	{
		mid = (left + right) / 2;

		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i != right)
			{
				printf("%d, ", array[i]);
			}
			else
			{
				printf("%d\n", array[i]);
			}
		}

		if (value == array[mid])
			return (mid);
		else if (value < array[mid])
			right = mid - 1;
		else
			left = mid + 1;
	}

	return (-1);

}
