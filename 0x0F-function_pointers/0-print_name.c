#include "function_pointers.h"

/**
 * Write a function that prints a name
 * Prototype: void print_name(char *name, void (*f)(char *));
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)

		f(name);
}
