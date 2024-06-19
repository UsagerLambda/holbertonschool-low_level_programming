#include "main.h"
/**
 * _islower  - Entry point
 * @c: variable int
 * Description : printf alphabet in lower case using only putchar
 * Return: Alway 0 (Success)
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if(n == 0)
{
_putchar('0');
return (1);
}
else
{
_putchar('-');
return (-1);
}
}
