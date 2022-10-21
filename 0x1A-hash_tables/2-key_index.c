#include "hash_tables.h"

/**
 * key_index -The function -> returns the normalized index for a key.
 * @key: key to get/set in the hashtable.
 * @size: size of the hash table
 * Return: Normalized index.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx = 0;

	idx = hash_djb2((unsigned char *)key);
	return (idx % size);
}
