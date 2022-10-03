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
	int i = 0, j;

	if (width == 0 || height == 0)
	return (NULL);
	array = (int **) malloc(sizeof(int *) * height);
	if (array[i] != NULL)
	{
		for(i < height; i++)
		{
			array[i] = (int *) malloc(sizeof(nt) * width);
			if (array[i] != NULL)
		{
			for (j = 0; j < width; j++)
				array[i][j] = 0;
		}
		else
		{
			while (i >= 0)
			{
				free(array[i]);
				i--;
			}
			freaa(array);
			return (NULL);
		}
	}
	return (array);
}
else
{
	return (NULL);
}
}
