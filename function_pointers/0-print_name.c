#include <stdlib.h>
/**
 * print_name - prints a name as is
 * @name: name of the person
 * @f: pointeur vers une fonction
 * Return: pas de return prototype void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f) /** si name et f ne sont pas NULL*/
	f(name); /** appelle la fonction pointer par f avec name comme argument */
}
