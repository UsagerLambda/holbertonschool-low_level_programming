#include <stdlib.h>
/**
 * alloc_grid - Entry point
 * @height: number of lines
 * @width: number of columns
 * Description : return a pointer to a 2D array of ints
 * Return: Always 0.
 */
int **alloc_grid(int width, int height)
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
for (w = 0; w < width; w++)
array[h][w] = 0;
}
return (array);
}
