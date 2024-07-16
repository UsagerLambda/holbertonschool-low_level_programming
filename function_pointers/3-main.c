#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "3-calc.h"
/**
 * main - programme principal pour calculer deux nombres
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

a = atoi(argv[1]); /** assign et convert en int la valeur de argv[1] à 'a' */
b = atoi(argv[3]); /** assign et convert en int la valeur de argv[3] à 'b' */

if (argv[2][1] != '\0')
{
	printf("Error\n");
	exit(99);
}
/** fonction get_op_func est appelée avec l'opérateur argv[2] */
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


 /** En prenant pour input 3 + 8 */
 /** argv[0] = ./calc       | argv[1] = 3   | argv[2] = + | argv[3] = 8 */
 /** Ligne 17 vérifie si le nombre d'arguments respecté. Dans ce cas, oui. */
 /** Puis, convert argv[1] & argv[3] en entiers puis les assigne à a & b. */
 /** Ligne 26, fonction get_op_func est appelée avec l'opérateur argv[2]. */
 /** Array ops parcouru pour trouver fonction associée à l'opérateur '+' */
 /** (car argv[2] est '+'). Compare argv[2] avec chaque élément du tableau */
 /** jusqu'à trouver le même opérateur. */
 /** Pour '+', on trouve op_add. On assigne op_add à la variable operator. */
 /** Si operator = NULL (donc introuvable), affiche "Error" puis exit 99. */
 /** Ce n'est pas le cas (car operator = op_add), donc on continue. */
 /** À la ligne 34, on vérifie si operator est '/' ou '%' et si b = 0. */
 /** Si c'est le cas, on affiche "Error" puis on sort avec le code 100. */
 /** Ligne 39, on affiche le résultat de la fonction operator = op_add, */
 /** donc op_add ayant a et b comme arguments (a = 3 & b = 8). */
 /** La fonction op_add renvoie le résultat de a + b. */
 /** Donc on affiche le résultat de a + b = 11. */
 /** Résultat final : 11 */
