#include "lists.h"

/**
 * sum_dlistint - sums up all the data in a linked list
 * @head: the head pointer of the linked list
 * Return: the sum of all the data or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *temp;

	sum = 0;
	temp = NULL;

	if (!head)
		return (0);

	temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
