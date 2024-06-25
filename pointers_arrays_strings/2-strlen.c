#include "main.h"
/**
 * _strlen - Entry point
 * @s: tableau
 * Description : return lenght of *s
 * Return: Alway 0 (Success)
 */
int _strlen(char *s)
{
int i = 0;
while (s[i])
{
i++;
}
return (i);
}
