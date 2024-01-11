#include "lists.h"

/**
 * dlistint_len - returns the number of elements in
 * a doubly linked list
 * @h: head of list
 * Return: nodes number
 */
size_t dlistint_len(const dlistint_t *h)
{
	int counter;

	counter = 0;

	if (h == NULL)
		return (counter);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}

	return (counter);
}
