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
  int i = 0, num = 0, sign = 1;
  while (s[i])
    {
      if (s[i] == '-')
	sign *= -1;
      else if (s[i] >= '0' && s[i] <= '9')
	num = num * 10 + (s[i] - '0');
      i++;
    }
  return (num * sign);
}
