#include "main.h"
/**
 * print_last_digit  - Entry point
 * @n: variable int
 * Description : printf alphabet in lower case using only putchar
 * Return: Alway 0 (Success)
 */
int print_last_digit(int n)
{
int a;
if (n >= 0)
{
a = n % 10;
_putchar(a + '0');
}
else if (n < 0)
{
a = (n % 10) * -1;
_putchar(a + '0');
return (a);
}
return (0);
}
