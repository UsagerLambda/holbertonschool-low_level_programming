#include "main.h"
/**
 * more_numbers  - Entry point
 * Description : display number from 0 to 9 followed by a new line
 * Return: Alway 0 (Success)
 */
void more_numbers(void)
{
int numbers, ligne;
for (ligne = 0; ligne < 10; ligne++)
{
for (numbers = 0; numbers <= 14; numbers++)
{
if (numbers > 9)
_putchar((numbers / 10) + '0');
_putchar((numbers % 10) + '0');
}
_putchar('\n');
}
}

