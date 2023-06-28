
/**
 * create_dnodeint - Creates a new doubly linked list node
 * @n: The value to store in the new node
 * @prev: Pointer to the previous node in the list
 * @next: Pointer to the next node in the list
 *
 * Return: Pointer to the newly created node, or NULL on failure
 */
dlistint_t *create_dnodeint(int n, dlistint_t *prev, dlistint_t *next)
{
	dlistint_t *new_node;

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->prev = prev;
	new_node->next = next;

	return (new_node);
}

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Double pointer to the head of the doubly linked list
 * @idx: Index of the list where the new node should be added
 * @n: The value to store in the new node
 *
 * Return: Address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;
	unsigned int count;

	if (!h)
		return (NULL);

	if (idx == 0)
	{
		new_node = create_dnodeint(n, NULL, *h);
		if (!new_node)
			return (NULL);
		if (*h)
			(*h)->prev = new_node;
		*h = new_node;

		return (new_node);
	}

	if (!*h && idx > 0)
		return (NULL);
	temp = *h;
	count = 0;

	while (temp)
	{
		if (count == idx - 1)
		{
			new_node = create_dnodeint(n, temp, temp->next);
			if (!new_node)
				return (NULL);
			if (temp->next)
				temp->next->prev = new_node;
			temp->next = new_node;
			return (new_node);
		}
		temp = temp->next;
		count++;
	}
	return (NULL);
}

