#include "lists.h"

/**
* pop_listint - deletes the head node of a listint_t linked list
* Return: returns the data of type int int the head node
* or 0 if the linked list is empty
* @head: head pointer to the linked list
*/

int pop_listint(listint_t **head)
{
	int x;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);

	x = (*head)->n;

	temp = *head;

	*head = temp->next;

	free(temp);

	return (x);
}
