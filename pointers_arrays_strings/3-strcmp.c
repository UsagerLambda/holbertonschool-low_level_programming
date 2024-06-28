#include "main.h"
#include <stdio.h>
/**
 * _strcmp - Entry point
 * @s1: tableau destination
 * @s2: tableau source
 * Description : compare two strings
 * Return: Alway 0 (Success)
 */
int _strcmp(char *s1, char *s2)
{
for (; *s1 != '\0'; s1++, s2++)
{
if (*s1 != *s2)
{
return (*s1 - *s2);
}
else
{
return (0);
}
}
return (0);
}
