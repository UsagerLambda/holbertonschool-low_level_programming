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
int n1 = 0;
int n2 = 0;
int n3 = 0;
int n4 = 0;
int n5 = 0;
int result = 0;
if (argc < 2)
{
printf("0\n");
return (1);
}
if (argc == 3)
{
n1 = atoi(argv[1]);
n2 = atoi(argv[2]);
result = n1 + n2;
}
if (argc == 4)
{
n1 = atoi(argv[1]);
n2 = atoi(argv[2]);
n3 = atoi(argv[3]);
result = n1 + n2 + n3;
}
if (argc == 5)
{
n1 = atoi(argv[1]);
n2 = atoi(argv[2]);
n3 = atoi(argv[3]);
n4 = atoi(argv[4]);
result = n1 + n2 + n3 + n4;
}
if (argc == 6)
{
n1 = atoi(argv[1]);
n2 = atoi(argv[2]);
n3 = atoi(argv[3]);
n4 = atoi(argv[4]);
n5 = atoi(argv[5]);
result = n1 + n2 + n3 + n4 + n5;
}
printf("%d\n", result);
return (0);
}
