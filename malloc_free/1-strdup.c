#include <stdlib.h>
/**
 * _strdup - Entry point
 * @str: string to copy 
 * Description : return a pointer that contain a copy of str
 * Return: Always 0.
 */
char *_strdup(char *str)
{
char *array;
int i = 0;
if (str == NULL)
return (NULL);
while (str[i] != '\0')
i++;
array = malloc(sizeof(str) * (i + 1));
if (array == NULL)
return (NULL);
i = 0;
while (str[i] != '\0')
{
array[i] = str[i];
i++;
}
array[i] = '\0';
return (array);
}
