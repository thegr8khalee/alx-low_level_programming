#include "main.h"

/**
 * get_endianness - ...
 *
 * Return: ...
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *ptr = (char *)&i;

	if (*ptr)
		return (1);
	else
		return (0);
}
