#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - Entry point
 * @s: string where we search character
 * @accept: string where the character we search is
 * Description : srch 1 char in array "s" w corrp to 1 char in array "accept"
 * Return: Alway 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
while (*s)
{
char *a = accept;
while (*a)
{
if (*s == *a)
{
return (s);
}
a++;
}
s++;
}
return (NULL);
}
