#include "main.h"
/**
 * print_line  - Entry point
 * @n: variable int
 * Description : print _ x time based on n
 * Return: Alway 0 (Success)
 */
void print_line(int n)
{
int count;
if (n <= 0)
_putchar('\n');
else
{
for (count = 0; count < n; count++)
_putchar('_');
_putchar('\n');
}
}
