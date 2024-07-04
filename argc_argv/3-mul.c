#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: args count (3 max, ./mul number1 number2)
 * @argv: arguments
 * Description : multiply argv[1] with argv[2]
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int number1 = 0;
int number2 = 0;
int result = 0;
if (argc != 3)
{
printf("Error\n");
return (1);
}
number1 = atoi(argv[1]);
number2 = atoi(argv[2]);
result = number1 *number2;
printf("%d\n", result);
return (0);
}
