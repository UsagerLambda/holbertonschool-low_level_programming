#include "main.h"
/**
 * _pow_recursion - Entry point
 * @x: int 1
 * @y: int 2
 * Description : return the value of the recursion of x and y
 * Return: Always 0.
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (x == 0 || y == 0)
return (1);
return (x * _pow_recursion(x, y - 1));
}
