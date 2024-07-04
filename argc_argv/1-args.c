#include <stdio.h>
/**
 * main - Entry point
 * @argc: args count
 * @argv: unused
 * Description : print the number of args
 * Return: Always 0.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
