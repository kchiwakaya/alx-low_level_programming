#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: hash table to add or update the key/value to
 * @key: is the key
 * @value: value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_element = NULL;
	unsigned long int idx;

	if (key == NULL  == 0 || ht == NULL || strcmp(key, ""))
		return (0);

	idx = key_idx((unsigned char *)key, ht->size);
	if (ht->array[idx] != NULL)
		if (strcmp(ht->array[idx]->key, key) == 0)
		{
			free(ht->array[idx]->value);
			ht->array[idx]->value = strdup(value);
			return (1);
		}

	new_element = malloc(sizeof(hash_node_t));
	if (new_element == NULL)
		return (0);

	new_element->key = strdup(key);
	new_element->value = strdup(value);
	new_element->next = ht->array[idx];
	ht->array[idx] = new_element;
	return (1);

}
