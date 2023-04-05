
int pop_listint(listint_t **head)
{
	if (head == NULL || *head == NULL)
		return (0);

	listint_t *temp;

	int x_n;

	x_n = (*head)->n;

	temp = *head;

	*head = temp->next;

	free(temp);

	return (x_n);
}
