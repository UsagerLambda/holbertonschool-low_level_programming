#include "main.h"
/**
 * puts_half - Entry point
 * @str: tableau
 * Description : print string starting from half of tab
 * Return: Alway 0 (Success)
 */
void puts_half(char *str)
{
int i = 0, count = 0;
while (str[count])
{
count++;
}
i = count / 2;
if (count % 2 == 0)
{
for (; i < count; i++)
{
_putchar(str[i]);
}
}
else
{
for (; i + 1 < count; i++)
{
_putchar(str[i]);
}
}
_putchar('\n');
}

