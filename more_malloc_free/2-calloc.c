#include <stdlib.h>
/**
 * _calloc - Entry point
 * @nmemb: numbers of elements in array
 * @size: size of bytes
 * Description : alloc memory to a array
 * Return: Always 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *array = 0;
if (nmemb == 0 || size == 0)
return (NULL);
array = malloc(sizeof(size) * nmemb);
if (array == NULL)
return (NULL);
return (array);
}