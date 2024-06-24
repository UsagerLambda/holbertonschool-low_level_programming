#include "main.h"
/**
 * print_diagonal  - Entry point
 * @n: int n
 * Description : draw diagnoal with diagonal in terminal
 * Return: Alway 0 (Success)
 */
void print_diagonal(int n)
{
int space, space2;
if (n <= 0)
_putchar('\n');
else
{
for (space = 1; space <= n; space++)
{
for (space2 = 1; space2 < space; space2++)
{
_putchar(' ');
}
_putchar(92);
_putchar('\n');
}
}
}
