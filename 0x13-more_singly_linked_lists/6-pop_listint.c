#include "lists.h"

/**
 * pop_listint - ...
 * @head: ...
 *
 * Return: ...
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	unsigned int data;

	if (*head == NULL)
		return (0);

	temp = *head;
	data = temp->n;
	*head = (*head)->next;
	free(temp);

	return (data);
}
