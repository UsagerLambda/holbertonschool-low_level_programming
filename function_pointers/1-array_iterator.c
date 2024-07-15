#include <stdlib.h>
/**
 * array_iterator - itère dans le tableau et applique la fonction action
 * @array: pointeur vers un tableau d'entier
 * @size: taille du tableau
 * @action: pointeur vers une fonction qui prend un entier en argument
 * Return: pas de return prototype void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
/** pointeur vers une fonction qui prend un entier (int) */
/** en argument et ne retourne rien (void) */
{
unsigned int i;

if (array && size && action)
/** Vérifie que array, size et la fonction action ne sont pas nuls */
{
	for (i = 0; i < size; i++) /** parcours le tableau*/
	action(array[i]); /** action devient soit print_elem soit print_elem_hex */
	/** après avoir print les 5 nombre du tableau */
	/** print les 5 nombres du tableau en hexadécimal */
}
}
