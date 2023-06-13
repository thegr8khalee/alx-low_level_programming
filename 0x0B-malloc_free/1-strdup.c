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
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	if (str != NULL)
	{
		dup = (char *)malloc((sizeof(char) * len) + 1);
	}

	if (dup == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		dup[i] = str[i];
	dup[len] = '\0';

	return (dup);
}
