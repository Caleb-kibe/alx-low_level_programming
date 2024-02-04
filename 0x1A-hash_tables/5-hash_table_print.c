#include "hash_tables.h"

/**
 * hash_table_print - prints the elements in an hash table
 * @ht: the hash table containing the elements
 *
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	unsigned long int i;
	int flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i <= ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s' : '%s'", current->key, current->value);
			current = current->next;
		}
	}
	printf("}\n");
}
