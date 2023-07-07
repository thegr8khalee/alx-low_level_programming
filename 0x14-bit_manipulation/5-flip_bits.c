 #include "main.h"

/**
 * flip_bits - ...
 * @n: ...
 * @m: ...
 *
 * Return: ...
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int i = 0;

	while (xor_result != 0)
	{
		if (xor_result & 1)
			i++;
		xor_result >>= 1;
	}
	return (i);
}
