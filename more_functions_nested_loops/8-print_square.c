#include "main.h"
/**
 * print_square  - Entry point
 * @size: - void
 * Description : print a square
 * Return: Alway 0 (Success)
 */
void print_square(int size)
{
int lgn, col;
if (size <= 0)
_putchar('\n');
else
for (lgn = 0; lgn < size; lgn++)
{
for (col = 0; col < size; col++)
{
_putchar('#');
}
_putchar('\n');
}
}
