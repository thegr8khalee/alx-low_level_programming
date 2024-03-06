#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements in an array
 * @size: size of array
 *
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *result;
	unsigned int i, j;

	if (nmemb == 0 || size == 0)
		return (NULL);

	j = size * nmemb;
 
	result = malloc(j);
	if (result == NULL)
		return (NULL);
	for (i = 0; i < j; i++)
		result[i] = 0;
	return (result);
}
