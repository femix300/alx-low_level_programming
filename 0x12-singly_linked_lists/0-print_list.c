
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * This function prints each element of a linked list, along with its length.
 * If the element's string is NULL, it prints "(nil)" instead of the string.
 *
 * Return: the number of nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t s = 0;
	char *str;
	unsigned int len;

	while (h)
	{
		str = h->str;
		len = h->len;
		printf("[%u] %s\n", len, str ? str : "(nil)");
		h = h->next;
		++s;
	}

	return (s);
}

