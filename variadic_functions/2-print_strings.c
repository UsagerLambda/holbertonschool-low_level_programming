#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - print les strings de la chaine variadic
 * @separator: chaine de caractère ','
 * @n: valeur du premiers nombre de la liste
 * @...: varadic paramètre
 * Return: Alway 0 (Success)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i; /** variable pour parcourir n*/
	const char *str;
	va_list args; /** variable args qui va stocker la liste des arguments. */

	va_start(args, n); /** initialise la liste d'arguments args */
	/** et place le pointeur sur le premier argument après n */
	for (i = 0; i < n; i++) /** déplace i dans la chaine */
{
	str = va_arg(args, const char*); /** assigne va_arg(...) à str */
	if (str == NULL) /** vérifie si le string est NULL */
	printf("(nil)\n"); /** si oui printf (nil) */
	else
	printf("%s", str); /** print le caractère pointé par i */
	if (separator != NULL && i < n - 1) /** si séparator n'est pas NULL */
	/** et i est inférieur à 3 */
	printf("%s", separator); /** si c'est le cas print separator (',') */
}
	va_end(args); /** termine la gestion de la liste d'arguments. */
	printf("\n"); /** saute une ligne à la fin */
}
