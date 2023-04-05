#include "lists.h"

/**
* free_listint - frees a linked lists
* @head: head pointer to the linked list
*/

void free_listint(listint_t *head)
{
	listint_t *temp, *temp2;

	temp = NULL;

	temp = head;

	while (temp != NULL)
	{
		temp2 = temp->next;
		free(temp);

		temp = temp2;
	}
}
