#include "main.h"
/**
 * Write a function that returns the length of a string.
 * Prototype: int _strlen_recursion(char *s);
 */
int _strlen_recursion(char *s);
{
	int i = 0;

	if (*s)
	{

		i++;
		i += _strlen_recursion(s + 1);

	}
	return (i);
}
