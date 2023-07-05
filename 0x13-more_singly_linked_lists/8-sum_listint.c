#include "lists.h"

/**
 * sum_listint - ...
 * @head: ...
 *
 * Return: ...
 */
int sum_listint(listint_t *head)
{
	unsigned int sum = 0;
	if (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
