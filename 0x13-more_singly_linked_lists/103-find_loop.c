#include "lists.h"

/**
 * find_listint_loop - this function finds the loop in a linked list
 * @head: head pointer to the linked list
 * Return: the address of the node where the loop starts
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *temp, *temp2;

	temp = head;
	temp2 = temp;

	if (head == NULL)
	{
		return (NULL);
	}

	while (temp != NULL && temp2 != NULL && (temp2->next) != NULL)
	{
		temp = temp->next;
		temp2 = temp2->next->next;

		if (temp == temp2)
		{
			temp = head;

			while (temp2 != temp)
			{
				temp = temp->next;
				temp2 = temp2->next;
			}

			return (temp2);
		}
	}

	return (NULL);
}
