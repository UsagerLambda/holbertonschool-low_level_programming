#include <stdlib.h>
/**
 * string_nconcat - Entry point
 * @s1: string1
 * @s2: string2
 * @n: byte variable
 * Description : put s2 after s1
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *array;
int i = 0, r = 0, o2 = 0, o = 0;
unsigned int r2;
while (s1[i] != '\0')
i++;
r = i + n;
array = malloc(sizeof(char) * (r + 1));
if (array == NULL)
return (NULL);
i = 0;
while (s1[i] != '\0')
{
array[i] = s1[i];
i++;
}
o = i + o;
while ((s2[o2] != '\0') && (r2 < n))
{
array[o] = s2[o2];
o++;
o2++;
r2++;
}
array[o] = '\0';
return (array);
}
