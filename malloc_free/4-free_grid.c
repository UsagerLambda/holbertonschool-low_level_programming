#include <stdlib.h>
/**
 * free_grid - Entry point
 * @grid: 2D array from 3-alloc_grid.c
 * @height: number of lines
 * Description : frees the 2d grid made in the previous exercice
 * Return: Always 0.
 */
void free_grid(int **grid, int height)
{
int h;
if (grid == NULL || height <= 0)
return;
for (h = 0; h < height; h++)
free(grid[h]);
free(grid);
}
