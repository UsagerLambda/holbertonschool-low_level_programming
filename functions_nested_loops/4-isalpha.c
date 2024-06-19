#include "main.h"
/**
 * _isalpha  - Entry point
 * @c: variable int
 * Description : printf alphabet in lower case using only putchar
 * Return: Alway 0 (Success)
 */
int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
