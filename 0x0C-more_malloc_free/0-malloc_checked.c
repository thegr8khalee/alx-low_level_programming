#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory
 *
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;
	if (b == 0)
		return (NULL);
	ptr = malloc(sizeof(int) * b);

	if (ptr == NULL || ptr == 0)
		exit(98);

	return (ptr);
}
