#include "lists.h"

/**
 * dlistint_len - a function that finds the length of a
 * doubly linked list
 * @h: the head pinter of the linked list
 * Return: the length of the linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count;

	const dlistint_t *temp;

	count = 0;
	temp = h;

	while (temp)
	{
		temp = temp->next;
		count++;
	}

	return (count);
}
