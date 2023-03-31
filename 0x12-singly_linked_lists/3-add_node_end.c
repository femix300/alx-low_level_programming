
#include "lists.h"

/**
 * add_node_end - Adds a new node to the end of a linked list_t list.
 *
 * @list: A double pointer to the first node of the list.
 * @str: The string to store in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **list, const char *str)
{
	list_t *new_node;
	list_t *current_node = *list;
	unsigned int str_len = 0;

	while (str[str_len])
		str_len++;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = str_len;
	new_node->next = NULL;

	if (*list == NULL)
	{
		*list = new_node;
		return (new_node);
	}

	while (current_node->next)
		current_node = current_node->next;

	current_node->next = new_node;

	return (new_node);
}

