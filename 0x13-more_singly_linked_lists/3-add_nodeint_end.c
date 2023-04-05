#include "lists.h"

/**
* add_nodeint_end - adds a node to the end of the list
* @n: an integer
* @head: double pointer to the headnode
* Return: the address of the new_node created
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;

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

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new_node;

	return (new_node);
}
