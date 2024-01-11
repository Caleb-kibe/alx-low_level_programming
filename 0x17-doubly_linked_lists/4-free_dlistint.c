#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list.
 * @head: pointer to head of the list
 * Return: 0 success
 */
void free_dlistint(dlistint_t *head)
{
	if (!head)
		return;

	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
