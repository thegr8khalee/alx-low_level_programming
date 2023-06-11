#include "main.h"
#include <stdlib.h>
/**
 * main - add two positive numbers
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0
 */

int main(int argc, char* argv[])
{
	int i, a, sum = 0;
	char *flag;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; argv[i]; i++)
	{
		a = strtol(argv[i], &flag, 10);
		if (*flag)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += a;
		}
	}
	printf("%d\n", sum);

	return (0);
}
