#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a node at a given index of a linked list
 * @head: pointer to the linked list
 * @idx: index in which a node is to be inserted
 * @n: the data (n) of the node
 * Return: the address of the new_node or NULL if the operation fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count;
	listint_t *new_node, *temp, *prev_node;

	count = 0;

	if (head == NULL)
		return (NULL);

	new_node = (listint_t *) malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	temp = *head;

	while (temp != NULL)
	{
		prev_node = temp;
		temp = temp->next;
		count++;

		if (count == idx)
		{
			new_node->next = temp;
			prev_node->next = new_node;
			return (new_node);
		}
	}

	return (NULL);

}

