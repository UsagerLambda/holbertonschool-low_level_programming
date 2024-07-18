#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - Selectionne la bonne fonction
 * demandé par l'utilisateur
 * @s: Opérateur passé en argument au programme
 * Return: un pointeur vers la fonction qui correspond à l'opérateur
 * donné en paramètre. Si s ne correspnd pas aux opérateurs = return NULL
 */
/** prend un argument char *s (string of chars)*/
/** retourne un pointeur vers deux entiers*/
int (*get_op_func(char *s))(int, int)
{
/** Déclaration du tableau de struct contenant */
/** les opérateurs et les fonctions associées */
op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
int i;
/** Vérifie si ops[i].op n'est pas NULL */
/** Vérifie si l'élément pointé est le même que la chaine 's' */
while (ops[i].op && *(ops[i].op) != *s)
i++; /** Si les conditions sont respectées avancée de 1 dans le tableau */
if (ops[i].op)
/** Access à 'f' de la struct op_t située à l'endroit [i] */
return (ops[i].f);
/** f est un pointeur vers une fonction qui prend 2 entiers */
return (NULL); /** sinon retourne NULL */
}

/** ops représente le tableau */
/** ops[i] accède à l'élément du tableau de la struct op_t */
/** ops[i].op / .op accède au membre op de la struct op_t  */
/** située à l'endroit [i] du tableau ops */