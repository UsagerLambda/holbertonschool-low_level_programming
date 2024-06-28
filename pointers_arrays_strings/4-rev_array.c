#include "main.h"
#include <stdio.h>
/**
 * reverse_array - Entry point
 * @a: tableau destination
 * @n: max number of character
 * Description : reverse array of int
 * Return: Alway 0 (Success)
 */
void reverse_array(int *a, int n)
{
  int start = 0;
  int end = n - 1;
  int temp;
  while (start < end)
    {
      temp = a[start];
      a[start] = a[end];
      a[end] = temp;
      start++;
      end--;
    }
}
