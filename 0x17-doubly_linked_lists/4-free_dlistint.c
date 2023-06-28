#include"lists.h"

/**
 * free_dlistint - frees a linked list
 * @head: head pointer of the linked list
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp, *current;

	if (!head)
		return;

	temp = NULL;
	current = NULL;
	temp = head;

	while (temp != NULL)
	{
		current = temp;
		temp = temp->next;
		free(current);
	}
}
