#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 * Description : printf alphabet in lower case using only putchar
 * Return: Alway 0 (Success)
 */
void print_alphabet_x10(void)
{
char  az;
int ct;
while (ct < 10)
{
for (az = 'a'; az <= 'z'; az++)
{
_putchar(az);
}
_putchar('\n');
ct++;
}
}
