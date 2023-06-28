#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a givien index in a linked list
 * @head: a pointer to the head pointer of the linked list
 * @index: the index where the node to be deleted is located
 * Return: 1 if successful and -1 if not
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;

	unsigned int pos = 0;

	if (*head == NULL)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	while (temp != NULL)
	{
		if (pos == index)
		{
			temp->prev->next = temp->next;
			if (temp->next != NULL)
				temp->next->prev = temp->prev;
			free(temp);
			return (1);
		}
		temp = temp->next;
		pos++;
	}

	return (-1);
}
