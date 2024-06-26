#include "main.h"
/**
 * puts2 - Entry point
 * @str: tableau
 * Description : print every other character of a string
 * Return: Alway 0 (Success)
 */
void puts2(char *str)
{
int a, i = 0;
while (str[i])
{
a = i % 2;
if (a == 0)
{
_putchar(str[i]);
}
i++;
}
_putchar('\n');
}
