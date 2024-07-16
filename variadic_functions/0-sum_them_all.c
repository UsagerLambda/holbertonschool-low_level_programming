#include <stdarg.h>
/**
 * sum_them_all: additionne tous les nombres
 * @n: valeur du nombre
 * Return: Alway 0 (Success)
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args; /** variable de type va_list pour stocker les arg. */
	unsigned int i; /** initialisation d'un compteur i */
	int sum = 0; /** initialisation variable sum */
	if (n == 0) /** si n est strictement égal à 0 */
	return (0); /** retourne 0 */
	va_start(args, n);
	for (i = 0; i < n; i++)
	sum = sum + va_arg(args, int);
	va_end(args);
	return (sum);
}