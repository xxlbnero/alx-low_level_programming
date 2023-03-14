#include "main.h"

/**
 * alloc_grid - create a two dimentional array of ints
 * @width: width of array
 * @height: hieght of said array
 * Return: pointer to a 2D array of ints
 */

int **alloc_grid(int width, int height)
{
	int **mptr;
	int i, j, f;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}
	mptr = (int **)malloc(height * sizeof(int *));

	if (mptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		mptr[i] = (int *)malloc(width * sizeof(int));
		if (mptr[i] == NULL)
		{
			for (f = 0; f < i; f++)
			{
				free(mptr[f]);
			}
			free(mptr);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			mptr[i][j] = 0;
		}
	}
	return (mptr);
}
