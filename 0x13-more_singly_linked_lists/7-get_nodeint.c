#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in the list
 * @head: first node in the list
 * @index: index of the node to return
 * Return: pointer to the node looked for
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;
	listint_t *temp = head;

	while (temp && j < index)
	{
		temp = temp->next;
		j++;
	}

	return (temp ? temp : NULL);
}