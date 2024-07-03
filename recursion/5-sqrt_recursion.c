#include "main.h"
/**
 * increment - _sqrt_recurssion - fonction to increment i
 * @n: nombre cible
 * @i: integer pour calculer la racine
 * Description : return the natural square of n
 * Return: Always 0.
 */
int increment(int n, int i)
{
if (i * i > n)
return (-1);
else if (i * i == n)
return (i);
else
return (increment(n, i + 1));
}

/**
 * _sqrt_recursion - Entry point
 * @n: nombre cible
 * Description : return the natural square of n
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (increment(n, 0));
}
