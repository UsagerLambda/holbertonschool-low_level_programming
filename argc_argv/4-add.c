#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: args count
 * @argv: arguments
 * Description : add argv[1] with argv[2], argv[3], argv[4], argv[5]
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int i = 0;
int result = 0;
if (argc < 2)
{
printf("0\n");
return (1);
}
for (i = 1; i < argc; i++)
result += atoi(argv[i]);
printf("%d\n", result);
return (0);
}
