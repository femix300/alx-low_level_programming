#include "lists.h"

/**
* print_listint_safe - prints a listint_t linked list
* @head: pointer to the linked list
* Return: the number of nodes
*/

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current;
	const listint_t *loop_node;
	size_t count = 0;
	size_t i;

	current = NULL;
	loop_node = NULL;

	current = head;

	while (current != NULL)
	{
		count++;
		i = 0;

		printf("[%p] %d\n", (void *)current, current->n);
		current = current->next;
		loop_node = head;

		while (i < count)
		{
			if (current == loop_node)
			{
				printf("-> [%p] %d\n", (void *)current, current->n);
				return (count);
			}
			i++;
			loop_node = loop_node->next;
		}
		if (head == NULL)
			exit(98);
	}

	return (count);
}
