#include "lists.h"

/**
 * list_len - ...
 * @h: ...
 *
 * Return: ...
 */
size_t list_len(const list_t *h)
{
	const list_t *current = h;
	size_t i = 0;

	while (current != NULL)
	{
		i += 1;
		current = current->next;
	}
	return (i);
}
