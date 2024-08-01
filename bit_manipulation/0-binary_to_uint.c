#include "main.h"
/**
 * binary_to_uint - Entry point
 * @b: NULL
 * Return: NULL
 */
unsigned int binary_to_uint(const char *b)
{
int i;
int count = 0;
for (i = 0; b != NULL; i++)
{
	if (b[i] != 1 && b[i] != 0)
	return (0);
	if (b[i] == 0)
	_putchar('F');
	if (b[i] == 1)
	_putchar('T');
}
return (count);
}
