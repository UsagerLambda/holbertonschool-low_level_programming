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
