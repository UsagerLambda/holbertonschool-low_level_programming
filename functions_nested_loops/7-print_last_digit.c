#include "main.h"
/**
 * print_last_digit  - Entry point
 * @n: variable int
 * Description : printf alphabet in lower case using only putchar
 * Return: Alway 0 (Success)
 */
int print_last_digit(int n)
{
int a;
a = n % 10;
_putchar(a);
return (0);
}