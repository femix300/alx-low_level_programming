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
