#include "main.h"

/**
 * alloc_grid - returns a pointer
 * @width: width of the array
 * @height: height of the array
 *
 * Return:pointer to the array
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	if (width <= 0 || height <= 0)
	return (NULL);
	array = malloc(sizeof(int *) * height);
	if (array == NULL)
	return (NULL);

		for (i = 0; i < height; i++)
		{
			array[i] = malloc(sizeof(int) * width);
			if (array[i] == NULL)
		{
			for (; i >= 0; i--)
				free(array[i]);
			free(array);
			return (NULL);
		}
	}
		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
				array[i][j] = 0;
		}
	return (array);
}
