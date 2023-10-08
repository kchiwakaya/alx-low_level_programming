#include "hash_tables.h"

/**
 * hash_table_create - Function that creates a hash table
 * @size: size of the hash table
 * Return:pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hshtable = NULL;
	unsigned long int i;

	if (size <= 0)
		return (NULL);

	hshtable = malloc(sizeof(hash_table_t));
	if (hshtable == NULL)
		return (NULL);

	hshtable->size = size;

	hshtable->array = malloc(sizeof(hash_node_t *) * size);
		if (hshtable->array == NULL)
			return (NULL);

	for (i = 0; i < size; i++)
		hshtable->array[i] = NULL;

	return (hshtable);
}
