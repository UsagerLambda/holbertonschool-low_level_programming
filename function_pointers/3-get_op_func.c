#include <stdlib.h>
/** prend un argument char *s (string of chars)*/
/** retourne un pointeur vers deux entiers*/
int (*get_op_func(char *s))(int, int);
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
int i = 0;
while (ops[i])
if 
}