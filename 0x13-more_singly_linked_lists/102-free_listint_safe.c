#include "lists.h"

/**
* free_listint_safe - frees a listint_t list
* @h: pointer to the head of the listint_t list
* Return: size of the list that was free'd
*/

size_t free_listint_safe(listint_t **h)
{
	int n;

	listint_t *temp;

	size_t count;

	count = 0;
	temp = NULL;

	if (*h == NULL || h == NULL)
		return (0);

	while (*h != NULL)
	{
		count++;

		n = *h - (*h)->next;

		if (n > 0)
		{
			temp = (*h)->next;
			free(h);
			*h = temp;
		}
		else
		{
			free(h);
			break;
		}
	}

	*h = NULL;

	return (count);
}
