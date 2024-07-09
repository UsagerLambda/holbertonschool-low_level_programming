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
unsigned int total, i;
unsigned char *byteP;
void *array;
if (nmemb == 0 || size == 0)
return (NULL);
total = nmemb * size;
array = malloc(total);
if (array == NULL)
return (NULL);
byteP = (unsigned char *)array;
for (i = 0; i < total; i++)
byteP[i] = 0;
return (array);
}
