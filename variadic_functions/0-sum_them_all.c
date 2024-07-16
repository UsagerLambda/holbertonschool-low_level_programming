#include <stdarg.h>
/**
 * sum_them_all: additionne tous les nombres
 * @n: valeur du premiers nombre de la liste
 * Return: Alway 0 (Success)
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args; /** variable de type va_list pour stocker les arg. */
	unsigned int i; /** initialisation d'un compteur i */
	int sum = 0; /** initialisation variable sum */

	if (n == 0) /** si n est strictement égal à 0 */
	return (0); /** retourne 0 */
	va_start(args, n); /** initialise la list args et pointe le 1 arg sur n */
	for (i = 0; i < n; i++) /** tant que i < n; i++ */
	sum = sum + va_arg(args, int); /** récupère l'args actuel de type int */
	/** et avance le pointeur au prochain argument */
	va_end(args);
	return (sum);
}

/** exemple pour la ligne 16 */
/** les args stockés sont  2, 98, 1024 */
/** l15 | tant que i < n donc i < 2 */
/** sum + 98 = 98 */
/** sum(98) + 1024 = 1122 */
/** car va_arg passe automatiquement à l'args suivant */
/** va_end fini la gestion de la list d'args */
/** renvoie sum */

