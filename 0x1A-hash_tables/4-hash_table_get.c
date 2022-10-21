#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - Function gets key & value from hash_table.
 * @ht: Pointer to hash_table to pull value from.
 * @key: Key to get value from hash table.
 * Return: Value associated to key, or NULL if key was not found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx = 0;
	char *val = NULL;
	hash_node_t *node;

	if (!ht || !key)
		return (NULL);
	else if (strlen(key) == 0)
		return (NULL);

	idx = key_index((unsigned char *)key, ht->size);
	if ((ht->array)[idx] == NULL)
		return (NULL);

	node = ht->array[idx];
	while (!val)
	{
		if (strcmp(node->key, key) == 0)
			val = node->val;
		node = node->next;
	}
	return (val);
}
