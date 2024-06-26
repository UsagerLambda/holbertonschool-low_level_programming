#include "main.h"
/**
 * _strcpy - Entry point
 * @dest:
 * @src:
 * Description : copy the string from src to dest
 * Return: Alway 0 (Success)
 */
char *_strcpy(char *dest, char *src)
{
char *p_dest = dest;
while ((*dest++ = *src++));
return p_dest;
}
