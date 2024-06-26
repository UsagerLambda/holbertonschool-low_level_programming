#include "main.h"
#include <stdio.h>
/**
 * puts_half - Entry point
 * @str: tableau
 * Description : print string starting from half of tab
 * Return: Alway 0 (Success)
 */
void print_array(int *a, int n)
{
int count = 0;
while (a[count])
{
if (count == n - 1)
{
printf("%d", a[count]);
count++;
}
else 
{
printf("%d, ", a[count]);
count++;
}
}
putchar('\n');
}
