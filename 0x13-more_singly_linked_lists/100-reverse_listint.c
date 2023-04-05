#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the linked list
 * Return: pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node, *next_node;

	prev_node = NULL;
	next_node = *head;

	if (*head == NULL)
		return (NULL);

	while (next_node != NULL)
	{
		next_node = next_node->next;
		(*head)->next = prev_node;
		prev_node = *head;
		*head = next_node;
	}

	*head = prev_node;

	return (*head);
}
