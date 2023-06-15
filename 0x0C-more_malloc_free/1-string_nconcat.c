#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: pointer to first string
 * @s2: pointer to second string
 * @n: number of bytes to append
 *
 * Return: pointer to concatinated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int lenResult, i, j = 0;
	char *result, *cnct;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while(s1[i] != '\0')
		i++;

	while(s2[j] != '\0')
		j++;

	if (n >= j)
		n = j;

	lenResult = i + n;
	result = malloc(sizeof(int) * (lenResult + 1));

	if (result == NULL)
		return (NULL);

	cnct = result;

	while (*s1 != '\0')
	{
		*cnct = *s1;
		cnct++;
		s1++;
	}

	while (n > 0 && *s2 != '\0')
	{
		*cnct = *s2;
		cnct++;
		s2++;
		n--;
	}

	cnct = '\0';

	return (result);
}
