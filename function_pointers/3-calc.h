#ifndef CALC_H
#define CALC_H
/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{	/** Pointeur vers la chaine de caractère représnt 'opérateur */
	char *op;
	int (*f)(int a, int b); /** Pointeur vers fonction qui prend 2 entiers */
	/** et retourne un entier ( *f )*/
} op_t;
int (*get_op_func(char *s))(int, int);
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
#endif
