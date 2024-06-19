#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 * Description : printf alphabet in lower case using only putchar
 * Return: Alway 0 (Success)
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
_islower(1 + '0');
}
else
{
_islower(0 + '0');
}
}
