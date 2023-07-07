#include "main.h"

/**
 * get_endianness - ...
 *
 * Return: ...
 */
int get_endianness(void)
{
	unsigned int n = 1;
	unsigned char *byteptr = (unsigned char *)&n;

	if (*byteptr == 1)
		return (1);
	else
		return (0);
}
