#include "lists.h"

/**
 * find_listint_loop - ...
 * @head: ...
 *
 * Return: ...
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *spongebob, *patrick;

	spongebob = patrick = head;
	while (spongebob && patrick && patrick->next)
	{
		spongebob = spongebob->next;
		patrick = patrick->next->next;
		if (spongebob == patrick)
		{
			spongebob = patrick;
			break;
		}
	}
	if (!spongebob || !patrick || !patrick->next)
		return (NULL);
	while (spongebob != patrick)
	{
		spongebob = spongebob->next;
		patrick = patrick->next;
	}
	return (patrick);
}
