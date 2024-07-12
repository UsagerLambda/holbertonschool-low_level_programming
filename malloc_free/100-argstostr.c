#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - Entry point
 * @ac: argc
 * @av: argv
 * Description : concatenates argv
 * Return: Always 0.
 */
char *argstostr(int ac, char **av)
{
int i = 0;
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
printf("%s\n", av[i]);
}
return (0);
}
