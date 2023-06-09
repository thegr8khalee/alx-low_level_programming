#include "main.h"
/**
 * Write a function that fills memory with a constant byte.
 */

char*_memset(char *s, char b, unsigned int n)
{
	int i;
	for (i = 0; n > 0; i++);
	{
		s[i] = b;
		n--;
	}
	return (s);
}
