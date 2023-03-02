
/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: Pointer to the array to be reversed.
 * @n: Number of elements in the array.
 *
 * Return: Nothing.
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}
}

