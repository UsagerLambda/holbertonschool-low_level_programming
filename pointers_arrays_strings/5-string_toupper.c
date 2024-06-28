#include "main.h"
#include <stdio.h>
/**
 * string_toupper - Entry point
 * @t: tableau destination
 * Description : convert lower case to upper
 * Return: Alway 0 (Success)
 */
char *string_toupper(char *t)
{
int i = 0;
while (t[i] != '\0')
{
if (t[i] >= 'a' && t[i] <= 'z')
t[i] = t[i] - 32;
i++;
}
return (t);
}
