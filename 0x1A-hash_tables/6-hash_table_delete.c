#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table
 * @ht: A pointer to the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i;
	hash_table_t *head = ht;
	hash_node_t *node, *prev;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			prev = node;

			node = node->next;

			free(prev->key);
			free(prev->value);
			free(prev);
		}
	}

	free(head->array);
	free(head);
}
