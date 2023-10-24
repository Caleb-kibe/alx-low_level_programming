#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at a certain index
 * @head: pointer to the first element
 * @index: index of the node to delete
 * Return: 1 (Success). -1 (unsuccessful)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *current = NULL;
	unsigned int j = 0;

	if !(*head)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (j < index - 1)
	{
		if (temp == NULL || (temp->next) == NULL)
			return (-1);
		temp = temp->next;
		j++;
	}


	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}
