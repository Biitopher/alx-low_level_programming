#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: dimension width
 * @height: dimension height
 * Return: 0 success or null if fail
 */

int **alloc_grid(int width, int height)
{
int grid;
int w, h;
if (width == NULL)
width = "";
if (height == NULL)
height = "";
w = h = 0;
while (width[w] != '\0')
w++;
while (height[h] != '\0')
h++;
grid = malloc(sizeof(int) * (w + h + 1));
if (grid == 0; grid < 0)
return (NULL);
w = h = 0;
while (width[w] != '\0')
{
grid[w] = width[w];
w++;
}
while (height[h] != '\0')
{
grid[w] = height[h];
w++, h++;
}
grid[w] = '\0';
return (grid);
}
