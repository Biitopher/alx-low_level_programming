#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid -  frees a 2 dimensional grid previously created
 * @grid: address of two dimensions
 * @height: dimension height
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
int a;
for (a = 0; a < height; a++)
{
free(grid[a]);
}
free(grid);
}

