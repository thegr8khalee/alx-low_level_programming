#include "lists.h"

/**
 * delete_nodeint_at_index - ...
 * @head: ...
 * @index: ...
 *
 * Return: ...
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	listint_t *previous;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		listint_t *temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	current = *head;
	previous = NULL;

	while (index > 0 && current != NULL)
	{
		previous = current;
		current = current->next;
		index--;
	}

	if (index > 0)
		return (-1);

	previous->next = current->next;
	free(current);
	return (1);
}
