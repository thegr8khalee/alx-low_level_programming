#include "lists.h"

/**
 * print_list - ...
 * @h: ...
 *
 * Return: ...
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	if (h == NULL)
		printf("[0] (nil)");
	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}

	return (i);
}
