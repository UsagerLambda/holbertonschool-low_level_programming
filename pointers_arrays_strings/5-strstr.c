#include "main.h"
#include <stdio.h>
/**
 * *_strstr - Entry point
 * @needle: string 2
 * @haystack: string 1
 * Description : find the occurence between the 2 strings
 * Return: Alway 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
if (*needle == '\0')
return (haystack);
while (*haystack)
{
char *a = haystack, *b = needle;
while (*a && *b && *a == *b)
{
a++;
b++;
}
if (*b == '\0')
return (haystack);
haystack++;
}
return (NULL);
}
