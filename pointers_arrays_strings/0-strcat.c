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
int a = 0;
char *p_dest = dest;
while (src[a])
a++;
dest[a] = src[a]
;
return (p_dest);
}
