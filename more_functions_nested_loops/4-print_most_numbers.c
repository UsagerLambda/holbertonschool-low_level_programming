#include "main.h"
/**
 * print_most_numbers - Entry point
 * Description : print number from 0 to 9 except 2 and 4
 * Return: Alway 0 (Success)
 */
void print_most_numbers(void)
{
int a = 0;
for (a = 0; a <= 9; a++)
if (a != 2 && a != 4)
{
_putchar(a + '0');
}
_putchar('\n');
}
