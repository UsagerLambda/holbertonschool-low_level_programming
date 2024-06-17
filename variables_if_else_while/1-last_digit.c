#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */
int main(void)
{
  int n, y;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	y = n % 10;
	printf("Last digit of %d is and %d is less than %d and not %d\n", n, y);
	return (0);
}
