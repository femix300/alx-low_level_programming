
#include "lists.h"

/**
 * add_node - Adds a new node to the beginning of a linked list_t list.
 *
 * @head: A double pointer to the first node of the list.
 * @str: The string to store in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len = 0;

	while (str[len])
		len++;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}

