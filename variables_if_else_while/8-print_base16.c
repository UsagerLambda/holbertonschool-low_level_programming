#include <stdio.h>
/**
 * main - Entry point
 * Description : print all number of base 16 in lowercase
 * Return: Alway 0 (Success)
 */
int main(void)
{
char hex;
for (hex = 0; hex <= 9; hex++)
{
putchar(hex);
}
for (hex = 'a'; hex <= 'f'; hex++)
{
putchar(hex);
}
{
putchar('\n');
}
return (0);
}
