#include "hash_tables.h"
#include <stdio.h>
#include <string.h>

int not_last_node(const hash_table_t *ht, hash_node_t *node);

/**
 * hash_table_print - print contents of a hash_table
 * @ht: hash_table to be printed
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node = NULL;
	unsigned long int j = 0, LastPos = 0;
	
	if (ht == NULL)
		return;
	putchar('{');
	if (ht)
	{
		for (; j < ht->size - 1; j++)
		{
			if (ht->array[j] != NULL)
				LastPos = j;
		}

		for (j = 0; j <= LastPos; j++)
		{
			node = ht->array[j];
			while (node)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (j < LastPos - 1)
					printf(", ");
			}

		}
	}
	printf("}\n");
}
