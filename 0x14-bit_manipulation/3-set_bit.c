#include "main.h"

/**
 * set_bit - ...
 * @n: ...
 * @index: ...
 *
 * Return: ...
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	x = 1 << index;
	*n = *n | x;

	return (1);
}
