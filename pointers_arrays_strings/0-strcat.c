#include "main.h"
#include <stdio.h>
/**
 * _strcat - Entry point
 * @dest: tableau destination
 * @src: tableau source
 * Description : do stuff
 * Return: Alway 0 (Success)
 */
char *_strcat(char *dest, char *src)
{
char *dest_ptr = dest;
while (*dest_ptr != '\0')
dest_ptr++;
while (*src != '\0')
*dest_ptr++ = *src++;
*dest_ptr = '\0';
return (dest);
}
