#include "main.h"
/**
 * _puts - Entry point
 * @str: tableau
 * Description : print string
 * Return: Alway 0 (Success)
 */
void _puts(char *str)
{
int i = 0;
while (str[i])
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
