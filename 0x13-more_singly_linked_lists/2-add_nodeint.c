#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: double pointer to the head of the list
 * @n: stores the int element of a node
 * Return: the address of the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node, *temp, *temp2;

	new_node = NULL;

	if (head == NULL)
		return (NULL);

	new_node = (listint_t *) malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	temp = *head;
	*head = new_node;
	temp2 = new_node;
	temp2->next = temp;

	return (new_node);
}
