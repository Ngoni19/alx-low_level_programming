#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - The function creates a hash table.
 * @size: size of hash table.
 * Return: pointer to the new hash_table (heap).
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int k = 0;
	hash_table_t *NewTable = NULL;

	NewTable = malloc(sizeof(hash_table_t));
	if (!NewTable)
		return (NULL);
	NewTable->size = size;
	NewTable->array = malloc(sizeof(hash_node_t *) * size);
	if (!NewTable->array)
	{
		free(NewTable);
		return (NULL);
	}
	for (; k < size; k++)
		(NewTable->array)[k] = NULL;
	return (NewTable);
}
