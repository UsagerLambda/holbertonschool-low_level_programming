#include "main.h"
#include <stdio.h>
/**
 * *_strchr - Entry point
 * @s: string
 * @c: character to check
 * Description : check if s[] is equal to c
 * Return: Alway 0 (Success)
 */
char *_strchr(char *s, char c)
{
while (*s)
{
if (*s == c)
return (s);
s++;
}
if (c == '\0')
return (s);
return (NULL);
}
