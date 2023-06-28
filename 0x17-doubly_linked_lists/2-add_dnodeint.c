#include "lists.h"

/**
 * add_dnodeint - adds a node at the begining of a linked list
 * @head: a pointer to the head pointer of the linked list
 * @n: the new element to be added
 * Return: the address of the new node that was added
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = NULL;

	new_node = (dlistint_t *) malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	new_node->prev = NULL;
	new_node->n = n;

	new_node->next = *head;
	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}

	*head = new_node;

	return (new_node);

}
