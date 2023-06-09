/**
 * _strchr - seach for the occourence of a char in a string
 * @s: pointer to yhe string to be scanned
 * @c: the char to search for
 * return: char
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
	if (*s == c)
		return (c);
	s++;
	else
		return ('\0');
	}
}
