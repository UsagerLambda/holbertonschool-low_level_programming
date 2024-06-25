#include "main.h"
/**
 * swap_int - Entry point
 * @a: pointer a
 * @b: pointer b
 * Description : swap a to b and b to a
 * Return: Alway 0 (Success)
 */
void swap_int(int *a, int *b)
{
int temp = 0;
temp = *a;
*a = *b;
*b = temp;
}
