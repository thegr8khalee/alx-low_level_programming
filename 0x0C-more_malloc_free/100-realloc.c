#include "main.h"
#include <stdlib.h>

/**
 * _realloc -  reallocates a memory block using malloc and free
 * @ptr: pointer to the variable
 * @old_size: old siz
 * @new_size: new size
 *
 * Return: void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p = ptr, *new_ptr;
	unsigned int i;

	if (p == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	if (new_size == 0)
	{
		free(p);
		return (NULL);
	}
	if (new_size == old_size)
		return (p);
	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);
	for (i = 0; i < old_size && i < new_size; i++)
		new_ptr[i] = p[i];
	free(p);

	return (new_ptr);
}
