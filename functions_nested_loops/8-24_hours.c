#include "main.h"
/**
 * jack_bauer  - Entry point
 * void - void
 * Description : print 00:00 to 23:59
 * Return: Alway 0 (Success)
 */
void jack_bauer(void)
{
int hr1, hr2, mn1, mn2;
for (hr1 = 0; hr1 <= 2; hr1++)
{
for (hr2 = 0; hr2 <= 9; hr2++)
{
if ((hr1 <= 1 && hr2 <= 9) || (hr1 <= 2 && hr2 <= 3))
{
for (mn1 = 0; mn1 <= 5; mn1++)
{
for (mn2 = 0; mn2 <= 9; mn2++)
{
_putchar(hr1 + '0');
_putchar(hr2 + '0');
_putchar(':');
_putchar(mn1 + '0');
_putchar(mn2 + '0');
_putchar('\n');
}
}
}
}
}
}
