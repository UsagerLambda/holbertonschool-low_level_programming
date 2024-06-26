#include "main.h"
/**
 * _strcpy - Entry point
 * @src: source de string
 * @dest: destination de la copy de src
 * Description : copy the string from src to dest
 * Return: Alway 0 (Success)
 */
char *_strcpy(char *dest, char *src)
{
char *p_dest = dest;
while ((*dest++ = *src++))
;
return (p_dest);
}
