#include "lists.h"

/**
 * print_listint_safe - ...
 * @head: ...
 *
 * Return: ...
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i, num = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (i = 0; i < num; i++)
		{
			if (head == list[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (num);
			}
		}
		num++;
		list = rev(list, num, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (num);
}

/**
 * rev - ...
 * @list: ...
 * @size: ...
 * @new: ...
 *
 * Return: ...
 */
const listint_t **rev(const listint_t **list, size_t size, const listint_t *new)
{
		const listint_t **newlist;
		size_t i;

		newlist = malloc(size * sizeof(listint_t *));
		if (newlist == NULL)
		{
			free(list);
			sexit(98);
		}
		for (i = 0; i < size - 1; i++)
		{
			newlist[i] = list[i];
		}
		newlist[i] = new;
		free(list);
		return (newlist);
}
