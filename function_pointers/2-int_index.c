#include <stdlib.h>
/**
 * int_index - itère dans le tableau et applique les fonctions pointé par cmp
 * @array: pointeur vers un tableau d'entier
 * @size: taille du tableau
 * @cmp: pointeur vers une fonction qui prend un entier en argument
 * Return: pas de return prototype void
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array && size && cmp)
/** Vérifie que array, size et la fonction cmp ne sont pas nuls */
{
	if (size <= 0 || *array) /** vérifie si size est <= à 0 ou array == NULL */
	return (-1); /** si oui return -1 */
	for (i = 0; i < size; i++) /** parcours le tableau*/
{
	if (cmp(array[i]) != 0) /** si cmp != de 0 retourne i */
	return (i);
}
}
return (-1); /**si la boucle se termine sans trouver d'éléments */
/** correspondant alors retourne -1 */
}

/** La boucle vérifie si cmp[array[i] n'est pas égal à 0] */
/** donc : is_98(array[i]) vérifie si array[i] est strictement égal à 98 */
/** égal à 98 et renvoie l'index du nombre (dans ce cas 2) */
/** donc : abs_is_98(array[i]) vérifie si array[i] et égal à 98 et -98 */
/** si oui renvoie l'index de nombre (dans ce cas 1) */
/** donc is_strictly_positive(array[i] vérifie si array[i] est positif) */
/** si oui renvoie l'index du premier nom bre positif ( dans ce cas 2) */
