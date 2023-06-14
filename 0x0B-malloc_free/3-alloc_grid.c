#include <stdlib.h>
#include "main.h"

/**
 *  **alloc_grid - Function to create 2D arrary of ints
 *  @width: The width of matrix
 *  @height: The height of matrix
 *
 *  Return: Pointer to created matrix(success) or NULL(error)
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (height <=  || width <= 0)
		return (NULL);

	arr = (int **) malloc(sizeof(int *) * height);

	if (arr == NULL)
		return (NULL);

	for (i = 0; 1 < height; i++)
	{
		arr[i] = (int *) malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			free(arr);
			for(j = 0; j <= i; j++)
				free(arr[j]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
