#include <stdlib.h>
/**
 * free_grid - Entry point
 * @height: number of lines
 * @width: number of columns
 * Description : return a pointer to a 2D array of ints
 * Return: Always 0.
 */
void free_grid(int **grid, int height)
{
int **array;
int h, w;
if (width <= 0 || height <= 0)
return (NULL);
array = malloc(sizeof(int *) * height);
if (array == NULL)
return (NULL);
for (h = 0; h < height; h++)
{
array[h] = malloc(sizeof(int) * width);
if (array[h] == NULL)
{
for (w = 0; w < h; w++)
free(array[w]);
return (NULL);
}
for (w = 0; w < width; w++)
array[h][w] = 0;
}
return (array);
}
