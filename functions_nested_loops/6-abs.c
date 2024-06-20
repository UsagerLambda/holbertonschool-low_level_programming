#include "main.h"
/**
 * _abs  - Entry point
 * @n: integer
 * Description : printf alphabet in lower case using only putchar
 * Return: Alway 0 (Success)
 */
int _abs(int n)
{
if (n < 0)
{
return (n * -1);
}
else
_putchar(n);
return (0);
}
