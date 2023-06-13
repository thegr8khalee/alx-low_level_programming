#include "main.h"
#include <stdlib.h>

/** _strdup - duplicate a string.
 * @str: pointer to the string to duplicate
 *
 * Return: return the duplicate pointer
 */
char *_strdup(char *str)
{
	char* dup;
	int i;

	if (str == NULL)
		return (NULL);

	if (str != NULL)
	{
		dup = malloc(sizeof(char) * str);
	}

	for (i = 0; i < str; i++)
		str[i] = dup[i];

	return (dup);
}
