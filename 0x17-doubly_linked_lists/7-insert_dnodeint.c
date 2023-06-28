#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given index
 * in a linked list
 * @h: a pointer to the head pointer of the linked list
 * @idx: the given index where the node is to be inserted
 * @n: the data to be inserted in the node
 * Return: the address of the added node or Null if inserting the
 * node was not possible
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count;
	dlistint_t *new_node, *temp;

	count = 0;
	new_node = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->next = NULL;
	new_node->prev = NULL;
	new_node->n = n;

	if (*h == NULL)
	{
		*h = new_node;
		return (new_node);
	}
	if (idx == 0)
	{
		new_node->next = *h;
		(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	temp = *h;
	while (temp->next != NULL)
	{
		if (count == (idx - 1))
		{
			new_node->prev = temp;
			new_node->next = temp->next;
			temp->next->prev = new_node;
			temp->next = new_node;
			return (new_node);
		}
		temp = temp->next;
		count++;
	}
	free(new_node);
	return (NULL);
}
