#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: args count
 * @argv: arguments
 * Description : add argv with the other argv
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
int i = 0, j = 0;
int result = 0;
if (argc < 2)
{
printf("0\n");
return (1);
}
for (i = 1; i < argc; i++)
{
int valid = 1;
for (j = 0; argv[i][j] != '\0'; j++)
{
if (argv[i][j] < '0' || argv[i][j] > '9')
{
valid = 0;
break;
}
}
if (!valid)
{
printf("Error\n");
return (1);
}
result = result + atoi(argv[i]);
}
printf("%d\n", result);
return (0);
}
