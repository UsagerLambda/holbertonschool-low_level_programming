#include <stdarg.h>
#include <stdio.h>
/**
 * print_number - additionne tous les nombres donnés en arguments
 * @separator: chaine de caractère
 * @n: valeur du premiers nombre de la liste
 * @...: varadic paramètre
 * Return: Alway 0 (Success)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i; /** variable pour parcourir n*/
	va_list args; /** variable args qui va stocker la liste des arguments. */
	va_start(args, n); /** initialise la liste d'arguments args */
	/** et place le pointeur sur le premier argument après n */
	for (i = 0; i < n; i++) /** déplace i dans la chaine */
{
	printf("%d", va_arg(args, int)); /** print le caractère pointer par i */
	if (separator != NULL && i < n - 1) /** si séparator n'est pas NULL */
	/** et i est inférieur à 3 */
	printf("%s", separator); /** si c'est le cas print separator (',') */
}
	va_end(args); /** termine la gestion de la liste d'arguments. */
	printf("\n"); /** saute une ligne à la fin */
}