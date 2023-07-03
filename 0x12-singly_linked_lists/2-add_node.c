#include "lists.h"

/**
 * add_node - ...
 * @head: ...
 * @str: ...
 *
 * Return: ...
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->str = strdup(str);
	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->len = _strlen(str);
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}

/**
 * _strlen - return the length of a string
 * @s: char to check
 * Description: this will return the length of a string
 * Return: 0 is success
 */
int _strlen(const char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
