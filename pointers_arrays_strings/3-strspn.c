#include "main.h"
#include <stdio.h>
/**
 * *_strspn - Entry point
 * @s: string
 * @accept: string 2
 * Description : get the length of the prefix substring
 * Return: Alway 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i = 0, c = 0, a = 0;
while (s[i])
{
int f = 0;
for (a = 0; accept[a]; a++)
{
if (s[i] == accept[a])
{
f = 1;
break;
}
}
if (!f)
break;
c++;
i++;
}
return (c);
}
