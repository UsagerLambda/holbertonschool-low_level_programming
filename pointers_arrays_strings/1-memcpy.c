#include "main.h"
#include <stdio.h>
/**
 * *_memcpy - Entry point
 * @dest: cpy destination
 * @src: src of dest
 * @n: bytes from memory area
 * Description : cpy memory area from src to dest
 * Return: Alway 0 (Success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}
