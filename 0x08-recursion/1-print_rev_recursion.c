#include "main.h"
/* void _print_rev_recursion - print string in reverse
 * @s: string
 * return = 0
 */
void _print_rev_recursion(char *s)
{
	if(*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
