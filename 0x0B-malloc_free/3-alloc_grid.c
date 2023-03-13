#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *alloc_grid- Entry point
 *@width: int
 *@height: int
 * Return: pointer to a 2 dimensional array of integers.
 */


int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	grid = malloc(sizeof(int) * height);
	if (width <= 0 || height <= 0)
		return (NULL);
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid == NULL)
		{
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
