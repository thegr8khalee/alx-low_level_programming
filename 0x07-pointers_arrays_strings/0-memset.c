#include "main.h"

// * The _memset() function fills the first n bytes of the memory area pointed to by s with the constant byte b
// Returns a pointer to the memory area s 

char *_memset(char *s, char b, unsigned int n)
{
	
	unsigned int i = 0;
	
	for (i = 0; i < n; i++)
	{
		*(d + i) = b;
	}

	return (s);
}
