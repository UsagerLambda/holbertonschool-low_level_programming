#include "main.h"
/**
 * print_numbers  - Entry point
 * Description : display number from 0 to 9 followed by a new line
 * Return: Alway 0 (Success)
 */
void print_numbers(void)
{
int a = 0;
for (a = 0; a <= 9; a++)
{
_putchar(a + '0');
}
_putchar('\n');
}
