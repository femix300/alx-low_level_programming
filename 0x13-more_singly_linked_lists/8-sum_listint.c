#include "lists.h"

/**
* sum_listint - finds the sum of all the data (n) of a listint_t linked list
* @head: pointer to the linked list
* Return: the sum
*/

int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum;

	sum = 0;

	if (head == NULL)
		return (0);

	temp = head;

	while (temp != NULL)
	{
		if ((temp->n) < 0)
			(temp->n) = -(temp->n);
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
