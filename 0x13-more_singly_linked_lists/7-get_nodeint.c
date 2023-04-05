#include "lists.h"

/**
* get_nodeint_at_index - returns the node at a given index of a linked list
* @head: the pointer to the linked list
* @index: the index of the node being considered
* Return: the node
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int len, count;

	listint_t *temp;

	count = len = 0;

	if (head == NULL)
		return (NULL);

	temp = head;

	while (temp != NULL)
	{
		if (count == index)
			return (temp);

		count++;

		temp = temp->next;
	}

	return (NULL);
}
