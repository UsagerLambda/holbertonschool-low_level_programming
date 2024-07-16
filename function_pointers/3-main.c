#include <stdlib.h>
#include "3-calc.h"
/**
 * main - Entry point
 * @argc: nombre d'arguments
 * @argv: argument
 * Return:
 */
/** vérifie si le nombre d'argc est égal à 4 sinon print Error */
/** ex : ./calc 1 + 1 */
int main(argc, *argv[])
{
if (argc != 4)
{
	printf("Error\n");
	exit(98);
}

a = atoi(argv[1]); /** assigne la valeur de argv[1] à 'a' */
b = atoi(argv[3]); /** assigne la valeur de argv[3] à 'b' */

/** vérifie si l'opérateur / ou % se retrouve avec b = 0 */
if ((*argv[2] == '/' && b == 0) || (*argv[2] == '%' && b == 0))
{
	printf("Error\n");
	exit(100);
}
}
