#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the hash table that is to be created
 * Return: a pointer to the hash table or NUll on failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashtable;
	unsigned long int i;

	i = 0;

	hashtable = malloc(sizeof(hash_table_t) * 1);
	if (!hashtable)
		return (NULL);

	hashtable->array = malloc(sizeof(hash_table_t *) * size);

	if (hashtable->array == NULL)
		return (NULL);

	for (; i < size; ++i)
	{
		hashtable->array[i] = NULL;
	}

	return (hashtable);
}
