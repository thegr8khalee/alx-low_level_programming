#include "main.h"

/**
 * binary_to_uint - ...
 * @b: ...
 *
 * Return: ...
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	unsigned int power = 1;
	int i, len = 0;

	if (b == NULL)
		return (0);

	while (b[len] != '\0')
		len++;

	if (len == 0)
		return (0);

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] == '0')
		{
			result += 0;
		}
		else if (b[i] == '1')
		{
			result += power;
		}
		else
		{
			return (0);
		}
		power *= 2;
	}
	return (result);
}
