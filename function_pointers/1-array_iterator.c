#include <stdlib.h>
/**
 * print_name - prints a name as is
 * @name: name of the person
 * @f: pointeur vers une fonction
 * Return: pas de return prototype void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
/** pointeur vers une fonction qui prend un entier (int) */
/** en argument et ne retourne rien (void) */
{
unsigned int i;
if (array && size > 0 && action)
/** Vérifie que array, size et la fonction action ne sont pas nuls */
{
    for (i = 0; i < size; i++) /** parcours le tableau*/
    action(array[i]);
}
}
