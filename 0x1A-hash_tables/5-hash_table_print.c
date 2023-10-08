#include"hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp_node = NULL;
	unsigned long int i = 0;
	unsigned long int j = 0;

	if (ht == NULL)
		return;

	printf("{");
	while (i < ht->size)
	{
		tmp_node = ht->array[i];
		while (tmp_node)
		{
			if (j > 0)
				printf(", ");
			printf("'%s': '%s'", tmp_node->key, tmp_node->value);
			tmp_node = tmp_node->next;
			j = 1;
		}
		i++;
	}
	printf("}\n");
}
