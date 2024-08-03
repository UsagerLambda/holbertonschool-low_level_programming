#include "main.h"
/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: Pointer to the unsigned long int to modify
 * @index: The index of the bit to set to 1
 * Return: 1 if successful, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	/* vérifie si index est hors limite */
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

/* Ajoute un 1 dans le binaire de n à la position index */
	*n |= (1UL << index);
	return (1);
}
