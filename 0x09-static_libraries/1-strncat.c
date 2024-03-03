#include "main.h"
/**
 * strncat - appends a string to the end of a string
 * @dest: pointer to the string to be appended
 * @src: pointer to the string to append
 * @n: int length of the characters to append
 * return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
