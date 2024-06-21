#include "main.h"
/**
 * times_table  - Entry point
 * void - void
 * Description : print 9 times table, starting with 0
 * Return: Alway 0 (Success)
 */
void times_table(void)
{
int lgn, col, tab, result, result1, result2;
tab = 10;
for (col = 0; col < tab; col++)
{
for (lgn = 0; lgn < tab; lgn++)
{
result = lgn * col;
result2 = result % 10;
result1 = result / 10;
if (lgn < tab)
{
if (result1 > 0)
{
_putchar (result1 + '0');
_putchar (result2 + '0');
}
else
{
_putchar (' ');
_putchar (result2 + '0');
}
}
if (lgn < 9)
{
_putchar (',');
_putchar (' ');
}
}
_putchar ('\n');
}
}
