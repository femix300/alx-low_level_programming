#include "lists.h"

/**
 * get_dnodeint_at_index - gets the node at a given index in a linked list
 * @head: the head pointer to the linked list
 * @index: the index where the node is located in the linked list
 * Return: the node or Null if the node doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count;
	dlistint_t *temp = NULL;

	count = 0;

	if (!head)
		return (NULL);

	temp = head;

	while (temp != NULL)
	{
		if (count == index)
			return (temp);
		temp = temp->next;
		count++;
	}

	return (NULL);
}
