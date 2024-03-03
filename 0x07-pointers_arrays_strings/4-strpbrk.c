#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to be searched.
 * @accept: The set of bytes to search for.
 * Return: ...
 */
char *_strpbrk(char *s, char *accept)
{
    int k;

    while (*s)
    {
        for (k = 0; accept[k]; k++)
        {
            if (*s == accept[k])
                return (s);
        }
        s++;
    }
    return ('\0');
}
