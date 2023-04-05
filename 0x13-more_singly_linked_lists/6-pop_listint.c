#include "lists.h"

/**
* pop_listint - deletes the head node of a listint_t linked list
* Return: returns the head node’s data(n)
* @head: pointer to the linked list
*/

int pop_listint(listint_t **head)
{
	if (*head == NULL)
		return (0);

	listint_t *temp;

	int x;

	x = (*head)->n;

	temp = *head;

	*head = temp->next;

	free(temp);

	return (x);
}
