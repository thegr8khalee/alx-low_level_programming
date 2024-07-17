#include "search_algos.h"

/**
  * linear_search - Searches for a value in an array
  *                 of integers using linear search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         else, the first index where the value is located.
  *
  */
int linear_search(int *array, size_t size, int value)
{
	size_t iterator;

	if (array == NULL)
		return (-1);

	for (iterator = 0; iterator < size; iterator++)
	{
		printf("Value checked array[%ld] = [%d]\n", iterator, array[iterator]);
		if (array[iterator] == value)
			return (iterator);
	}

	return (-1);
}
