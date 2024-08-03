#include "main.h"
/**
 * print_binary - convert n into binary
 * @n: number to convert
 */
void print_binary(unsigned long int n)
{
	char binary_digit;
/* n se convertie en binaire et '&' conpare le chiffre le plus à droite */
	binary_digit = (n & 1) + '0'; /* et le convertie en char */
	n = n >> 1; /* divise par 2 */
	if (n > 0)
		print_binary(n);

	_putchar(binary_digit);
}

/* Exemple de (n & 1) avec n = 98 */
/* (98 & 1) = 01100010 & 1 */
/* '&' vérif le chiffre le plus à droite, il vérifie s'il est égal à 1 */
/* Dans notre cas, 0110 0010 & 1 = 0 */
/* n = n >> 1 décale les chiffres vers la droite de 1 bit : */
/* 01100010 devient 00110001 */
/* On vérifie si n > 0 ; dans notre cas n = 49 donc on appelle print_binary */
/* en récursion et on répète le processus jusqu'à n = 0 */
/* Donc 98/2 = 49, 49/2 = 24, 24/2 = 12, 12/2 = 6, 6/2 = 3, 3/2 = 1 */
/* binary_digit prendra le dernier chiffre de chaque conversion binaire de n */
/* Lorsque n = 0, la récursion fait le chemin inverse */
/* et imprime les chiffres dans l'ordre correct */
/* Par exemple, pour n = 98, la séquence binaire est 01100010 */
