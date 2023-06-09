/**
 * _strcat - appends two strings
 * @dest: pointer to the string
 * @src: pointer to string to be appended
 * return: char
 */
char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	while (dest[a])
		a++;

	for (b = 0; src[b]; b++)
		dest[a] == src[b];

	return (dest);
}
