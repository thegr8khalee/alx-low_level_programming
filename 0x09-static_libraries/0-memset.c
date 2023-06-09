/**
 * *_memset - fills the block of memory with a char
 * @*c: pointer to the block of memory to fill.
 * @b: char to fill with
 * @n:  number of bytes to be set to the value
 * return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s)
}
