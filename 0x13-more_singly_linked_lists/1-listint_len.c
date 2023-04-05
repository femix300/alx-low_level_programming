#include "lists.h"

/**
* listint_len - finds the length of a linked list
* @h: head pointer to the linked list
* Return: length of the linked list
*/

size_t listint_len(const listint_t *h)
{
	size_t count;

	count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
