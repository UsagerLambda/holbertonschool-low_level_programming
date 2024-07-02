#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: pointeur vers le premier element du tableau
 * @size: taille matrice
 * Description : calcul est imprime les sommes des diagonales
 * Return: Alway 0 (Success)
 */
void print_diagsums(int *a, int size)
{
int sum1 = 0, sum2 = 0, i = 0;
for (i = 0; i < size; i++)
{
sum1 = sum1 + a[i * size + i];
sum2 = sum2 + a[i * size + (size - 1 - i)];
}
printf("%d, %d\n", sum1, sum2);
}