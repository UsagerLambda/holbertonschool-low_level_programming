#include "main.h"
#include <stdio.h>
/**
 * _atoi - Entry point
 * @s: source de string
 * Description : copy the string from src to dest
 * Return: Alway 0 (Success)
 */
int _atoi(char *s)
{
  int count = 0;
while (s[count])
{
  if (s[count] == '+' || s[count] == '-')
      printf("%c", s[count]);
  else if (s[count] >= '0' && s[count] <= '9')
    printf("%c", s[count]);
  count++;
 }
 return (0);
}
