#include "lists.h"

/**
 * free_listint2 - ...
 * @head: ...
 *
 * Return: ...
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(head);
	}
}
