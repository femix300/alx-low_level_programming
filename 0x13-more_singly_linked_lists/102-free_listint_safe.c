#include "lists.h"

/**
* free_listint_safe - frees a listint_t list
* @h: pointer to the head of the listint_t list
* Return: size of the list that was free'd
*/

size_t free_listint_safe(listint_t **h)
{
	listint_t *temp, *current;

	size_t count;

	count = 0;
	temp = NULL;
	current = *h;

	if (*h == NULL || h == NULL)
		return (0);

	while (current != NULL)
	{
		count++;
		if (current < current->next)
		{
			temp = current;
			current = current->next;
			free(temp);
		}
		else
		{
			free(current);
			break;
		}
	}

	*h = NULL;

	return (count);
}
