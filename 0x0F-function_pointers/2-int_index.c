#include "function_pointers.h"

/**
 * int_index -  searches for an integer
 * @array: pointer to an array
 * @size: size of array
 * @cmp: pointer to a function
 *
 * Return: returns the index of the first element for which
 * the cmp function does not return 0, if no element matches, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || cmp == NULL || array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
