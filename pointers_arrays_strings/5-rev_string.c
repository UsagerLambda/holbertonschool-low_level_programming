#include "main.h"
/**
 * rev_string - Entry point
 * @s: tableau
 * Description : reverse string
 * Return: Alway 0 (Success)
 */
void rev_string(char *s)
{
  int count = 0, i;
  char tab;
  while (s[count] != '\0')
    {
      count++;
    }
  for (i = 0; i < count / 2; i++)
    {
      tab = s[i];
      s[i] = s[count - 1 - i];
      s[count - 1 - i] = tab;
    }
}
