#include "main.h"

/**
 * print_binary - ...
 * @n: ...
 *
 * Return: ...
 */
void print_binary(unsigned long int n)
{
	unsigned long int d, result;
	char flag;

	flag = 0;
	d = _pow(2, sizeof(unsigned long int) * 8 - 1);

	while (d != 0)
	{
		result = n & d;
		if (result == d)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || d == 1)
		{
			_putchar('0');
		}
		d >>= 1;
	}
}

/**
 * _pow - ...
 * @b: ...
 * @p: ...
 *
 * Return : ...
 */
unsigned long int _pow(unsigned int b, unsigned int p)
{
	unsigned long int n;
	unsigned int i;

	n = 1;
	for (i = 1; i <= p; i++)
	{
		n *= b;
	}
	return (n);
}
