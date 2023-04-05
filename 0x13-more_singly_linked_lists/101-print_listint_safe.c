#include "lists.h"

/**
* print_listint_safe - prints a listint_t linked list
* it can print lists with a loop
* @head: pointer to the linked list
* Return: number of nodes in the list
*/

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp;
	const listint_t *next;
	size_t count;

	count = 0;
	temp = head;

	while (temp != NULL)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		count++;

		next = temp->next;
		if (next >= temp)
		{
			printf("-> [%p] %d\n", (void *)next, next->n);
			exit(98);
		}

		temp = next;
	}

	return (count);
}
