#include <stdlib.h>
#include "main.h"
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
if (height <= 0)
return (NULL);
if (width <= 0)
return (NULL);
array = (int **)malloc(sizeof(int *) * height);
if (array == NULL)
return (NULL);
for (h = 0; h < height; h++)
{
array[h] = malloc(sizeof(int) * width);
if (array[h] == NULL)
{
w = 0;
if (w < h)
{
free(array[w]);
w++;
}
free(array);
return (NULL);
}
for (w = 0; w < width; w++)
array[h][w] = 0;
}
return (array);
}
