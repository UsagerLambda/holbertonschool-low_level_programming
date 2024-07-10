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
unsigned int i = 0, o = 0, r = 0, o2 = 0;
if (s1 == NULL)
s1 = (""); 
if (s2 == NULL)
s2 = ("");
while (s1[i] != '\0')
i++;
while (s2[o] != '\0')
o++;
if (n >= o)
r = i + o;
else
r = i + n;
array = malloc(sizeof(char) * (r + 1));
if (array == NULL)
return (NULL);
i = 0;
o = 0;
while (s1[i] != '\0')
{
array[i] = s1[i];
i++;
}
o = i + o;
while ((s2[o2] != '\0') && (o2 < n))
{
array[o] = s2[o2];
o++;
o2++;
}
array[o] = '\0';
return (array);
}
