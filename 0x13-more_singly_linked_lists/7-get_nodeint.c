#include "lists.h"

/**
 * get_nodeint_at_index - ...
 * @head: ...
 * @index: ...
 *
 * Return: ...
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;

	while (current != NULL && index > 0)
	{
		current = current->next;
		index--;
	}
	if (current == NULL || index > 0)
		return (NULL);
	return (current);
}
