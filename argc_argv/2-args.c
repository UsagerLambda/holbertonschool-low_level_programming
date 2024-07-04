#include <stdio.h>
/**
 * main - Entry point
 * @argc: args count
 * @argv: unused
 * Description : print each argument follow by a new line
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int i = 0;
for (; i != argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}