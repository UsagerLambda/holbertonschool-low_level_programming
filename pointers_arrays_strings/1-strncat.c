#include "main.h"
#include <stdio.h>
/**
 * _strncat - Entry point
 * @dest: tableau destination
 * @src: tableau source
 * @n: max number of character
 * Description : do stuff
 * Return: Alway 0 (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
char *dest_ptr = dest;
while (*dest_ptr != '\0')
dest_ptr++;
while (n-- > 0 && *src != '\0')
*dest_ptr++ = *src++;
*dest_ptr = '\0';
return (dest);
}
