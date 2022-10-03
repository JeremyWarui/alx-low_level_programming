#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * alloc_grid - create a 2d array
  * @width: the width of the 2d array or columns
  * @height: height of 2d arryay or rows
  * Return: pointer or Null
  */

int **alloc_grid(int width, int height)
{
	int row;
	int col;
	int **grid;

	if (width < 1 || height < 1)
		return (NULL);

	/* allocate mem for row */
	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}

	/* allocate mem for each cols */
	for (row = 0; row < height; row++)
	{
		grid[row] = malloc(sizeof(int *) * width);

		if (grid[row] == NULL)
		{
			for (row = 0; row < height; row++)
				free(grid[row]);
			free(grid[row]);
			return (NULL);
		}

		for (col = 0; col < width; col++)
			grid[row][col] = 0;

	}

	return (grid);
}
