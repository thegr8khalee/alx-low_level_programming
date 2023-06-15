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

	if (nmemb == 0 || size == 0)
		return (NULL);

	result = malloc(sizeof(int) * (size * nmemb));
	if (result == NULL)
		return (NULL);
	free(result);
	return (result);
}
