#include <stdio.h>
/**
 * _atoi - Entry point
 * @s: source de string
 * Description : convert string to an integer
 * Return: Alway 0 (Success)
 */
int _atoi(char *s)
{
int i = 0, num = 0, sign = 1, j = 0;
while (s[i])
{
if (s[i] == '-' && !j)
sign *= -1;
else if (s[i] >= '0' && s[i] <= '9')
{
num = num * 10 + (s[i] - '0');
j = 1;
}
else if (j)
break;
i++;
}
return (num *sign);
}
