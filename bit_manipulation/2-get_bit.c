#include "main.h"
/**
 * get_bit - Returns the value of a bit at a given index
 * @n: The number to be checked
 * @index: The index of the bit to get
 * Return: The value of the bit at index, or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
char bit;

if (index >= n) /* vérifie si index est hors limite */
return (-1);

n = n >> index; /* décale n vers la droite jusqu'à l'index */
bit = n & 1; /* obtient le bit le plus à droite après décalage */

return (bit); /* retourne le bit trouvé */
}
