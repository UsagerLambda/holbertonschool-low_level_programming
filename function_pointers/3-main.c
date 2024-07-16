#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "3-calc.h"
/**
 * main - Entry point
 * @argc: nombre d'arguments
 * @argv: tableau de chaine de caractère représenant les arguments
 * Return: 0 si success, sinon une autre valeur en cas d'erreur
 */
/** vérifie si le nombre d'argc est égal à 4 sinon print Error */
/** ex : ./calc 1 + 1 */
int main(int argc, char *argv[])
{
int a, b; /** argv[1] & argv[3] */
int (*operator)(int, int); /** opérateur */
if (argc != 4)
{
	printf("Error\n");
	exit(98);
}

a = atoi(argv[1]); /** assigne la valeur de argv[1] à 'a' */
b = atoi(argv[3]); /** assigne la valeur de argv[3] à 'b' */

operator = get_op_func(argv[2]);
/** vérifie si operateur est NULL*/
if (operator == NULL)
{
	printf("Error\n");
	exit(99);
}
/** vérifie si l'opérateur / ou % se retrouve avec b = 0 */
if ((*argv[2] == '/' && b == 0) || (*argv[2] == '%' && b == 0))
{
	printf("Error\n");
	exit(100);
}
printf("%d\n", operator(a, b));
return (0);
}
