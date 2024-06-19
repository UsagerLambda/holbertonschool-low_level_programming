#include "main.h"
/**
 * print_alphabet - Entry point
 * Description : printf alphabet in lower case using only putchar
 * Return: Alway 0 (Success)
 */
void print_alphabet(void)
{
char  az;
for (az = 'a'; az <= 'z'; az++)
{
_putchar(az);
}
_putchar('\n');
}

