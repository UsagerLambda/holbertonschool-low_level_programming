#include "main.h"
/**
 * _strncpy - Entry point
 * @dest: tableau destination
 * @src: tableau source
 * @n: max number of character
 * Description : do stuff
 * Return: Alway 0 (Success)
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
for (; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
return (dest);
}
