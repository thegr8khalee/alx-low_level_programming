#include "main.h"
/**
 * wildcmp - compares two strings
 * returns 1 if the strings can be considered identical
 * otherwise return 0
 * @s1: first string to compare
 * @s2: second sring to compare
 * return: int
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == *s2)
		return (1);
	else if (s1[0] == s2[0])
		return (1 + wildcmp(s1 + 1, s2 + 1));
	else if (s1['\0'] == s2['\0'])
		return (1 + wildcmp(s1 - 1, s2 - 1));
	else
		return (0);
}
