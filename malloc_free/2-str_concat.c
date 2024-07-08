#include <stdlib.h>
/**
 * str_concat - Entry point
 * @s1: String1
 * @s2: string2
 * Description : put String2 after String1
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
char *array;
int i = 0, o = 0, r = 0, o2 = 0;
while (s1[i] != '\0')
i++;
while (s2[o] != '\0')
o++;
r = i + o;
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
while (s2[o2] != '\0')
{
array[o] = s2[o2];
o++;
o2++;
}
array[o] = '\0';
return (array);
}
