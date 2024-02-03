#include "hash_tables.h"

/**
 * key_index - returns the index of a key in an array of a hash table
 * @key: the key to find the index for
 * @size: the size of the array in the hash table
 *
 * Return: the index at which the key is to be stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;
	return (index);
}
