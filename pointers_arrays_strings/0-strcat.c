#include "main.h"
#include <stdio.h>
/**
 * puts_half - Entry point
 * @str: tableau
 * Description : print string starting from half of tab
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
