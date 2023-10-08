#include"hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: hash table
 *
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp_node = NULL;
	hash_node_t *tmp_node2 = NULL;
	unsigned long int idx = 0;

	if (ht != NULL)
	{
		while (idx < ht->size)
		{
			tmp_node = ht->array[idx];
			if (tmp_node != NULL)
			{
				if (tmp_node->next != NULL)
				{
					tmp_node = tmp_node->next;
					while (tmp_node != NULL)
					{
						tmp_node2 = tmp_node;
						tmp_node = tmp_node->next;
						free(tmp_node2->key);
						free(tmp_node2->value);
						free(tmp_node2);
					}
				}
				tmp_node = ht->array[idx];
				if (tmp_node->key != NULL && tmp_node->value != NULL)
				{
					free(tmp_node->key);
					free(tmp_node->value);
				}
			}
			free(tmp_node);
			idx++;
		}
		free(ht->array);
		free(ht);
	}
}
