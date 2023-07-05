#include "lists.h"

/**
 * insert_nodeint_at_index - ...
 * @head: ...
 * @idx: ...
 * @n: ...
 *
 * Return: ...
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *current;
	listint_t *last;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	current = *head;
	last = NULL;

	while (idx > 0 && current != NULL)
	{
		last = current;
		current = current->next;
		idx--;
	}

	if (idx > 0)
	{
		free(new);
		return (NULL);
	}

	new->next = current;
	if (last != NULL)
		last->next = new;

	return (new);
}
