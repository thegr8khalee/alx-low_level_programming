#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - ...
 * @head: ...
 *
 * Return: ...
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
