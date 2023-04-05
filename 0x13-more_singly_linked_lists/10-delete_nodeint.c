#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node at a given index in a linked list
 * @head: pointer to the linked list
 * @index: index of the node in the linked list
 * Return: (1) if successfull and (-1) if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count;
	listint_t *temp, *prev_node;

	count = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (temp != NULL)
	{
		prev_node = temp;
		temp = temp->next;
		count++;

		if (count == index)
		{
			prev_node->next = temp->next;
			free(temp);
			return (1);
		}
	}

	return (-1);

}
