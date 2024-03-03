#include "main.h"

/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: no return.
 */
void print_number(int n)
{
	char buffer[20];
	int i = 0, j = 0;
	if (n == 0) _putchar('0');
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	while(n != 0)
	{
		j = n % 10;
		buffer[i++] = '0' + j;
		n = n / 10;
	}
	while (i > 0)
	{
		_putchar(buffer[--i]);
	}
}
