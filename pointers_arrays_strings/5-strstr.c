#include "main.h"
#include <stdio.h>
/**
 * *_strstr - Entry point
 * @needle: string
 * @haystack: string 2
 * Description : find the occurence between the 2 strings
 * Return: Alway 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
while (*needle)
{
char *a = haystack;
while (*a)
{
if (*needle == *a)
{
return (needle);
}
a++;
}
needle++;
}
return (NULL);
}
