#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a linked list
 * @head: the pointer to the head pointer of the linked list
 * @n: the elemented to be inserted
 * Return: the address of the added node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp;

	new_node = NULL;

	new_node = (dlistint_t *) malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	if (*head == NULL)
	{
		*head = new_node;
		new_node->prev = NULL;
		new_node->next = NULL;
		new_node->n = n;
		return (new_node);
	}

	temp = *head;

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new_node;
	new_node->prev = temp;
	new_node->n = n;
	new_node->next = NULL;

	return (new_node);
}
