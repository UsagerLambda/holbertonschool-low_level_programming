#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * argstostr - Entry point
 * @ac: argc
 * @av: argv
 * Description : concatenates argv
 * Return: Always 0.
 */
char *argstostr(int ac, char **av)
{
	int i = 0, l = 0, j, k = 0;
	char *r;

	if (ac == 0 || av == NULL)
	return (NULL);
	for (i = 0; i < ac; i++)
{
	for (j = 0; av[i][j]; j++)
	l++;
	l++;
}
	l++;
	r = (char *)malloc(sizeof(char) * l);
	if (r == NULL)
	return (NULL);
	for (i = 0; i < ac; i++)
{
	for (j = 0; av[i][j] != '\0'; j++)
	r[k++] = av[i][j];
	r[k++] = '\n';
}
	r[k] = '\0';
	return (r);
}
