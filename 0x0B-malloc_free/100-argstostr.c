#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments of the program
 * @ac: arguments count
 * @av: arguments
 *
 * Retrun: Returns a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, len = 0;
	char *str, *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		s = av[i];
		j = 0;
		while (s[j] != '\0')
		{
			len++;
			j++;
		}
		len++;
	}

	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);

	i = 0;
	for (j = 0; j < ac; j++)
	{
		s = av[j];
		k = 0;
		while (s[k] != '\0')
		{
			str[i] = s[k];
			k++;
			i++;
		}
	}
	str[i] = '\0';

	return (str);
}
