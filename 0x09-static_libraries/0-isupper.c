/**
 * _isupper - checks if a char is capital letter
 * @c: char to check
 * return: 1 if char is capital otherwise return 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
