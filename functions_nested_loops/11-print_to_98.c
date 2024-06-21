#include <stdio.h>
/**
 * times_table  - Entry point
 * void - void
 * Description : print 9 times table, starting with 0
 * Return: Alway 0 (Success)
 */
void print_to_98(int n)
{
if (n <= 98)
{
for (; n <= 98; n++)
{
if (n != 98)
printf("%d, ", n);
else
printf("%d\n", n);
}
}
else
{
for (; n >= 98; n--)
{
if (n != 98)
printf("%d, ", n);
else
printf("%d\n", n);
}
}
}
