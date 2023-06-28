#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dlistint - prints out all the elements in a doubly
 * linked list
 * @h: head pointer to the linked list
 * Return: number of elemens in the linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count;

	const dlistint_t *temp;

	temp = h;
	count = 0;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		count++;
		temp = temp->next;
	}

	return (count);
}
