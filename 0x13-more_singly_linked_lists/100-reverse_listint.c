#include "lists.h"
/**
 * reverse_listint - ...
 * @head: ...
 *
 * Return: ...
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;
	listint_t *current = *head;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;

		prev = current;
		current = next;
	}
	*head = prev;

	return (*head);
}
