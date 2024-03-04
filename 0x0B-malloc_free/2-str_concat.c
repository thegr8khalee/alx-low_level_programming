#include "main.h"
#include <stdlib.h>

/**
 * str_concat -  concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the concatenated string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int len, len1, len2, a, b;
	char *conc;

	len1 = len2 = 0;

	if (s1 != NULL)
	{
		a = 0;
		while (s1[a++] != '\0')
		len1++;
	}
	if (s2 != NULL)
	{
		b = 0;
		while (s2[b++] != '\0')
			len2++;
	}

	len = len1 + len2;
	conc = (char *)malloc(sizeof(char) * (len + 1));

	if (conc == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < len1; a++)
	{
				conc[a] = s1[a];
	}

	for (b = 0; b < len2; a++, b++)
	{
		conc[a] = s2[b];
	}
	conc[len] = '\0';

	return (conc);
}