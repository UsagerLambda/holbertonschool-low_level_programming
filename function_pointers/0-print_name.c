#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - prints a name as is
 * @name: name of the person
 * @f: pointeur vers une fonction
 * Return: pas de return prototype void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == 0)
	return;
	if (name == 0)
	return;
	f(name); /** f devient print_name_as_is ou print_name_uppercasse */
	/** et name devient Bob ou Bob Dylan*/
	/** dans main ont appelle print_name en donnant name = Bob */
	/** et en demandant la fonction print_name_as_is */
	/** ou Bob Dylan avec print_name_uppercase*/
	/** f(name) devient soit print_name_as_is(Bob) */
	/** ou print_name_uppercase(Bob Dylan) */
}
