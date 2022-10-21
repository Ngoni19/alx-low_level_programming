#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>

/**
 * hash_table_set - Function sets key value pair in the hash_table.
 * @ht: Pointer to hash table to set in.
 * @key: Key to set in hash_table.
 * @value: Value to set as hash_node's value.
 * Return: 1 on success, or 0 on failure.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx = 0;
	char *DupValue = NULL, *DupKey = NULL;
	hash_node_t *NewNode = NULL, *TmpNode = NULL;

	if (!ht || !key || !value)
		return (0);
	else if (strlen(key) == 0)
		return (0);
	DupValue = strdup(value);
	DupKey = strdup(key);
	NewNode = malloc(sizeof(hash_node_t));
	if (!NewNode)
		return (0);
	NewNode->key = DupKey;
	NewNode->value = DupValue;
	NewNode->next = NULL;
	idx = key_index((unsigned char *)key, ht->size);
	if ((ht->array)[idx] != NULL)
	{
		TmpNode = (ht->array)[idx];
		while (TmpNode)
		{
			if (strcmp(TmpNode->key, DupKey) == 0)
			{
				free(ht->array[idx]->value);
				ht->array[idx]->value = DupValue;
				free(DupKey);
				free(NewNode);
				return (1);
			}
			TmpNode = TmpNode->next;
		}
		TmpNode = (ht->array)[idx];
		NewNode->next = TmpNode;
		(ht->array)[idx] = NewNode;
	}
	else
		(ht->array)[idx] = NewNode;
	return (1);
}
