#include "lists.h"

/**
 * free_listint_safe - ...
 * @h: ...
 *
 * Return: ...
 */
size_t free_listint_safe(listint_t **h)
{
	size_t i, x = 0;
	listint_t **list = NULL;
	listint_t *next;

	if (h == NULL || *h == NULL)
		return (x);
	while (*h != NULL)
	{
		for (i = 0; i < x; i++)
		{
			if (*h == list[i])
			{
				*h = NULL;
				free(list);
				return (x);
			}
		}
		x++;
		list = re_v(list, x, *h);
		next = (*h)->next;
		free(*h);
		*h = next;
	}
	free(list);
	return (x);
}

/**
 * re_v - ...
 * @list: ...
 * @size: ...
 * @new: ...
 *
 * Return: ...
 */
listint_t **re_v(listint_t **list, size_t size, listint_t *new)
{
	listint_t **newlist;
	size_t i;

	newlist = malloc(size * sizeof(listint_t *));
	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}
	for (i = 0; i < size - 1; i++)
		newlist[i] = new;
	free(list);
	return (newlist);
}
