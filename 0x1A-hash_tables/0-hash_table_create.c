#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the hash table that is to be created
 *
 * Return: a pointer to the hashtable or Null on failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashtable;
	unsigned long int i;

	hashtable = malloc(sizeof(hash_table_t));
	if (!hashtable)
		return (NULL);

	hashtable->size = size;
	hashtable->array = malloc(sizeof(hash_node_t *) * size);

	if (hashtable->array == NULL)
		return (NULL);

	for (; i < size; i++)
		hashtable->array[i] = NULL;

	return (hashtable);
}
