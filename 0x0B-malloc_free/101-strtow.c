#include "main.h"
#include <stdlib.h>

/**
 * countWords - counts the number of words in a string
 * @str: the string
 * Return: number of words in a string
 */
int countWords(char *str)
{
	int i, count = 0, len = 0;

	while (str[len])
		len++;

	for (i = 0; i < len; i++)
	{
		if (str[i] == ' ')
		{
			if (str[i + 1] != ' ' && str[i + 1] != '\0')
				count++;
		}
		else if (i == 0)
			count++;
	}

	return (count);
}

/**
 * strtow - splits a string into words
 * @str: the string to split
 * Return  returns a pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	char **words;
	int i, j, q, k, len, wordCount = 0, wordStart = -1, wordEnd = -1;

	if (str == NULL || *str == '\0')
		return (NULL);
	if (*str == ' ')
		return (NULL);

	wordCount = countWords(str);

	words = (char **)malloc(sizeof(char *) * (wordCount + 1));
	if (words == NULL)
		return (NULL);
	for (i = 0, j = 0; i < wordCount; i++)
	{
		while (str[j] == ' ')
			j++;
		wordStart = j;

		for (q = len; q > 0; q--){
			if (str[j] == ' ')
				j++;
		}
		wordEnd = j - 1;
		len = wordEnd - wordStart + 1;

		words[i] = (char *)malloc(sizeof(char) * (len + 1));
		if (words[i] == NULL)
		{
			for (k = 0; k < i; k++)
				free(words[k]);
			free(words);
			return (NULL);
		}

		for (k = 0; k < len; k++)
			words[i][k] = str[wordStart++];

		words[i][k] = '\0';
	}

	words[wordCount] = NULL;

	return (words);
}
