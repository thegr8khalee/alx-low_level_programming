/**
 * _memcpy - pointer to the function that copies n characters
 *           from memory area to another
 * @dest: ponter to the destination array
 * @src: This is pointer to the source of data to be copied
 * @n: int number of bytes to be copied
 * return: a char dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
