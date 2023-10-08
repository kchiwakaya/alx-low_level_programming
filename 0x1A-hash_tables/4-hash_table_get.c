#include"hash_tables.h"

/**
 * hash_table_get - fretrieves a value associated with a key.
 * @ht: hash table to look into
 * @key:key to look for
 * Return: value associated with element, or NULL if key not found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int  idx;
	hash_node_t *temp_node = NULL;

	if (strcmp(key, "") == 0 || ht == NULL || key == NULL)
		return (0);

	idx = key_index((unsigned char *)key, ht->size);
	temp_node = ht->array[idx];
	while (temp_node != NULL)
	{
		if (strcmp(key, temp_node->key) == 0)
			return (temp_node->value);
		temp_node = temp_node->next;
	}
	return (NULL);
}
