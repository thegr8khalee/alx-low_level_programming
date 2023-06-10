#include "main.h"
/** main - print the name of an argument
 * @argc: argument
 * @argv: array of strings
 * return: int
 */
int main(int argc, char* argv[])
{
	int i;

	if (argc != 0)
	{
		for (i =0; i < argc; i++)
			printf("%s", argv[i]);

		printf("\n");
	}
	else
		return (0);
	return (0);
}
