#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of 2d array
 * @height: height of 2d array
 *
 * Retrun: pointer to a 2 dimensional array of integers
 * If width or height is 0 or negative, return NULL
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **array;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = (int **)malloc(sizeof(int *) * height);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array[i] = (int *)malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			for (j--; j >= 0; j--)
				free(array[j]);
			free(array);
			return (NULL);
		}
	}

	for (j = 0; j < width; j++)
	{
		for (i = 0; i < height; i++)
			array[i][j] = 0;
	}

	return (array);
}
