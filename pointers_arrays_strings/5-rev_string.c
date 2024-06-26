#include "main.h"
/**
 * rev_string - Entry point
 * @s: tableau
 * Description : reverse string
 * Return: Alway 0 (Success)
 */
void rev_string(char *s)
{
int count = 0;
int i;
char temp;
while (s[count])
{
count++;
}
for (i = 0; i < count / 2; i++)
{
temp = s[i];
s[i] = s[count - 1 - i];
s[count - 1 - i] = temp;
}
}
