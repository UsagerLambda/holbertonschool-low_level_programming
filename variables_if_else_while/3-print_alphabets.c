#include <stdio.h>
/**
 * main - Entry point
 * Description : printf alphabet in lower case using only putchar
 * Return: Alway 0 (Success)
 */
int main(void)
{
char  az;
for (az = 'a'; az <= 'z'; az++)
{
putchar(az);
}
for (az = 'A'; az <= 'Z'; az++)
{
putchar(az);
}
{
putchar('\n');
}
return (0);
}
