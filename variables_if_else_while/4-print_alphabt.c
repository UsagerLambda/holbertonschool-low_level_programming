#include <stdio.h>
/**
 * main - Entry point
 * Description : printf alphabet in lower case except 'qe' using only putchar
 * Return: Alway 0 (Success)
 */
int main(void)
{
char  az;
for (az = 'a'; az <= 'z'; az++)
if (az != 'q' && az != 'e')
{
putchar(az);
}
{
putchar('\n');
}
return (0);
}
