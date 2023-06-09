#include "main.h"
#include <unistd.h>
/**
 * _putchar - prints a char
 * @c: Char to print
 * return: int
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
