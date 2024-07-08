#include <stdlib.h>
/**
 * create_array - Entry point
 * @size: size of the array
 * @c: content of array
 * Description : create a array of chars
 * Return: Always 0.
 */
char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i = 0;
if (size == 0)
return (NULL);
array = malloc(sizeof(c) * size);
if (array == NULL)
return (NULL);
for (i = 0; i < size; i++)
array[i] = c;
return (array);
}
