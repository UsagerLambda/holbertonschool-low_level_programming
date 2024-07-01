#include "main.h"
#include <stdio.h>
/**
 * *_memset - Entry point
 * @s: pointer to memory
 * @b: constant byte
 * @n: number of bytes
 * Description : replace *s with b
 * Return: Alway 0 (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
s[i] = b;
i++;
}
return (s);
}
