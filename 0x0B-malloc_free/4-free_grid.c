#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *free_grid - Entry point
 *@grid: 2 dimensional grid
 *@height: int
 * Return: Nothing
 */


void free_grid(int **grid, int height)
{
	int i;

	if (height <= 0 || grid == NULL)
		return;
	for (i = 0; i < height; i++)
		free(grid[i]);
}
