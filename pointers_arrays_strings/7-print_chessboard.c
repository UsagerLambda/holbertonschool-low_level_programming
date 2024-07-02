#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - Entry point
 * @a: two dimensional array
 * Description : print every char in the array
 * Return: Alway 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
int i = 0, j = 0;
while (i < 8)
{
j = 0;
while (j < 8)
{
printf("%c", a[i][j]);
j++;
}
printf("\n");
i++;
}
}
