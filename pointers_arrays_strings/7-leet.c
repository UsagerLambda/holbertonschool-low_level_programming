#include "main.h"
#include <stdio.h>
/**
 * *leet - Entry point
 * @t: max number of character
 * Description : encodes string into 1337 (leet)
 * Return: Alway 0 (Success)
 */
char *leet(char *t)
{
int i = 0;
char leet[256];
leet['a'] = leet['A'] = '4';
leet['e'] = leet['E'] = '3';
leet['o'] = leet['O'] = '0';
leet['t'] = leet['T'] = '7';
leet['l'] = leet['L'] = '1';
while (t[i])
{
if (leet[(unsigned char)t[i]] != 0)
{
t[i] = leet[(unsigned char)t[i]];
}
i++;
}
return (t);
}
