#include <stdio.h>
/**
 * main - Entry point
 * Description : print number from 0 to 100
 * Return: Alway 0 (Success)
 */
int main(void)
{
  int num, num3, num5, num15;
for (num = 1; num <= 100; num++)
{
num3 = num % 3;
num5 = num % 5;
num15 = num % 15;
if (num15 == 0)
printf(" FizzBuzz");
else if (num3 == 0)
printf(" Fizz");
else if (num5 == 0)
printf(" Buzz");
else if (num != 1 && num != 100)
printf(" %d", num);
else
printf("%d", num);
}
return (0);
}
