#include "lists.h"

/**
* free_listint2 - frees a linked lists and sets the head to NULL
* @head: double pointer to the head of the linked list
*/

void free_listint2(listint_t **head)
{

	listint_t *temp, *temp2;

	temp = NULL;

	temp = *head;

	while (temp != NULL)
	{
		temp2 = temp->next;
		free(temp);

		temp = temp2;
	}

	*head = NULL;

}
