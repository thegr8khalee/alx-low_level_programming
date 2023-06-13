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

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

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
	conc = (char *)malloc(sizeof(char) * len + 1);

	if (conc == NULL)
		 return (NULL);

	conc[len] = '\0';

	return(conc);
}
