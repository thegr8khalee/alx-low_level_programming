#include <stdio.h>

/**
 * Write a program that prints the number of arguments passed into it.
 */

int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
