#include "main.h"
#include <stdlib>

int main(int argc, char* argv[])
{
	int a, b;

	if (argc != 2)
		a = atoi(argv[1])
		b = atoi(argv[2])
		printf("%d\n", a * b);
	else
		printf("Error\n");
			return (1);
	return (0);
}
