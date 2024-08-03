#include "main.h"
/**
 * flip_bits - Calcul le nombre de bits à changer
 * pour convertir un nombre en un autre.
 * @n: Premier nombre.
 * @m: Deuxième nombre.
 * Return: Nombre de bits différents.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int nb_flip;
unsigned int bit_diff = 0;

/* Compare n et m, si les bits diffèrent, le bit résultant est 1 */
nb_flip = n ^ m;

while (nb_flip != 0)
{
	/* vérifie si le bit le plus à droite est 1 */
	if ((nb_flip & 1) == 1)
	bit_diff = bit_diff + 1;
	/* Décale nb_flip vers la droite pour vérifier le bit suivant */
	nb_flip = nb_flip >> 1;
}
return (bit_diff);
}
