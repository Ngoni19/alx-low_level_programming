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
	char *_val = NULL;
	hash_node_t *_nod;

	if (!ht || !key)
		return (NULL);
	else if (strlen(key) == 0)
		return (NULL);

	idx = key_index((unsigned char *)key, ht->size);
	if ((ht->array)[idx] == NULL)
		return (NULL);

	_nod = ht->array[idx];
	while (!_val)
	{
		if (strcmp(_nod->key, key) == 0)
			_val = _nod->_val;
		_nod = _nod->next;
	}
	return (_val);
}
