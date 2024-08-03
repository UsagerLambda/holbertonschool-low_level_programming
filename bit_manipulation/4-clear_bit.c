#include "main.h"
/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: Pointer to the unsigned long int to modify
 * @index: The index of the bit to set to 0
 * Return: 1 if successful, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;
	/* vérifie si index est hors limite */
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

/* 1UL << index, crée et déplace le nombre 1 à la position index */
/* le caractère "~" remplace les 0 par des 1 et les 1 par des 0 */
/* j'effectue l'opération & qui compare les n et mask */
/* Tous les 1 & 0 sont comparé à leurs emplacement équivalent in n & mask */
/* Seul les chiffres indentique reste tel quel dans la sortie finale */
	*n &= (mask = ~(1UL << index));

	return (1);
}
