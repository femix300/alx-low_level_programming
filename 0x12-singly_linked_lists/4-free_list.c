
#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a linked list_t list.
 *
 * @head: A pointer to the first node of the list.
 */
void free_list(list_t *head)
{
	list_t *current_node, *next_node;

	if (head == NULL)
		return;

	current_node = head;

	while (current_node != NULL)
	{
		next_node = current_node->next;
		free(current_node->str);
		free(current_node);
		current_node = next_node;
	}
}

