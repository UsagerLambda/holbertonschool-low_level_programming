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
int a = 0;
a = *s1 - *s2;
while (*s1 && (*s1 == *s2))
{
s1++;
s2++;
}
return (a);
}
