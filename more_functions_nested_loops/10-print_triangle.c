#include "main.h"
/**
 * print_triangle - Entry point
 * @size: taille du triangle
 * Description : print hashtag in triangle
 * Return: Alway 0 (Success)
 */
void print_triangle(int size)
{
int lgn, space, hash;
if (size <= 0)
{
_putchar('\n');
}
for (lgn = 1; lgn <= size; lgn++)
{
for (space = 0; space < size - lgn; space++)
{
_putchar(' ');
}
for (hash = 0; hash < lgn; hash++)
{
_putchar('#');
}
_putchar('\n');
}
}
