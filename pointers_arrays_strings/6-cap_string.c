#include "main.h"
#include <stdio.h>
/**
 * *cap_string - Entry point
 * @t: max number of character
 * Description : do stuff
 * Return: Alway 0 (Success)
 */
char *cap_string(char *t)
{
  int i = 0;
  while (t[i])
    {
      if (t[i] == ' ')
	if (t[i + 1] >= 'a' && t[i + 1] <= 'z')
	  t[i + 1] = t[i + 1] - 32;
      i++;
    }
  return (t);
}
