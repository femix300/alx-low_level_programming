#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer to the head of the listint_t list
 * Return: size of the list that was free'd
 */

size_t free_listint_safe(listint_t **h)
{
	int n;
	listint_t *temp, *current;
	size_t count;

	count = 0;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;

	while (current != NULL)
	{
		n = current - current->next;
		count++;

		if (n > 0)
		{
			temp = (current)->next;
			free(current);
			current = temp;
		}
		else
		{
			free(current);
			current = NULL;
			break;
		}
	}

	*h = NULL;

	return (count);
}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	listint_t *head;
	listint_t *head2;
	listint_t *node;

	head2 = NULL;
	add_nodeint(&head2, 0);
	add_nodeint(&head2, 1);
	add_nodeint(&head2, 2);
	add_nodeint(&head2, 3);
	add_nodeint(&head2, 4);
	add_nodeint(&head2, 98);
	add_nodeint(&head2, 402);
	add_nodeint(&head2, 1024);
	print_listint_safe(head2);
	head = NULL;
	node = add_nodeint(&head, 0);
	add_nodeint(&head, 1);
	add_nodeint(&head, 2);
	add_nodeint(&head, 3);
	add_nodeint(&head, 4);
	node->next = add_nodeint(&head, 98);
	add_nodeint(&head, 402);
	add_nodeint(&head, 1024);
	print_listint_safe(head);
	free_listint_safe(&head2);
	free_listint_safe(&head);
	printf("%p, %p\n", (void *)head2, (void *)head);
	return (0);
}

