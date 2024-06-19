#include "main.h"
/**
 * _islower  - Entry point
 * @c: variable int
 * Description : printf alphabet in lower case using only putchar
 * Return: Alway 0 (Success)
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
