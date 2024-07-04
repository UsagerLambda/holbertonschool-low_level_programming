#include <stdio.h>
/**
 * main - Entry point
 * @argc: compte le nombre argument
 * @argv: recupere les arguments
 * Description : print its own name
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int i = 0;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
