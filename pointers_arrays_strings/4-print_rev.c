#include "main.h"
/**
 * print_rev - Entry point
 * @s: tableau
 * Description : print string in reverse
 * Return: Alway 0 (Success)
 */
void print_rev(char *s)
{
int i = 0;
while (s[i])
{
i++;
}
while (i >= 0)
{
_putchar(s[i]);
i--;
}
_putchar('\n');
}
