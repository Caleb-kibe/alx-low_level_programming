#include "lists.h"
/**
 * add_node - adds a new node
 * @head: head of the linked list
 * @str: string to store
 * Return: address of the head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t chars;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);

	for (chars = 0; str[chars]; chars++)
		;

	new->len = chars;
	new->next = *head;
	*head = new;

	return (*head);
}
