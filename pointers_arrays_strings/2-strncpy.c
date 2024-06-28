#include "main.h"
/**
 * _strncat - Entry point
 * @dest: tableau destination
 * @src: tableau source
 * @n: max number of character
 * Description : do stuff
 * Return: Alway 0 (Success)
 */
char *_strncpy(char *dest, char *src, int n)
{
char *dest_ptr = dest;
while (n-- > 0 && *src != '\0')
*dest_ptr++ = *src++;
*dest_ptr = '\0';
return (dest);
}
