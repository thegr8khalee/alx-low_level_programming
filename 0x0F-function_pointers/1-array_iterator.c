#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array
 * @array: pointer to an array
 * @size: size of array
 * @action: pointer to a function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array && action)
	{
		i = 0;
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
