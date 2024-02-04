#include "hash_tables.h"

/**
 * hash_table_get - finds the value of a key
 * @ht: the hash table to look
 * @key: key whoose value is searched for
 *
 * Return: the value of the key or NILL if the key cound not be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current;
	unsigned long int index;

	if (ht == NULL || *key == '\0' || key == NULL)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	current = ht->array[index];

	while (current != NULL && index <= ht->size)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}
	return (NULL);
}
