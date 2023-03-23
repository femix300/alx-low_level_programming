#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a given function on each element of an array
 * @array: pointer to the array to iterate over
 * @size: size of the array
 * @action: pointer to the function to execute on each element
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}

