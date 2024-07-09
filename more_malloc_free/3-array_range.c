#include <stdlib.h>
/**
 * array_range - Entry point
 * @min: minimal value
 * @max: maximal value
 * Description : create a array of integer from min to max
 * Return: Always 0.
 */
int *array_range(int min, int max)
{
int *array, r, i;
r = max - min + 1;
if (min > max)
return (NULL);
array = malloc(sizeof(int) * r);
if (array == NULL)
return (NULL);
for (i = 0; i < r; i++)
array[i] = min + i;
return (array);
}
