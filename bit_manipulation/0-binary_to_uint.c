#include "main.h"
/**
 * binary_to_uint - converts a binary number
 * @b: string of 1 and 0
 * Return: number converted
 */
unsigned int binary_to_uint(const char *b)
{
int i;
unsigned int count = 0;
if (b == NULL)
return (0);

for (i = 0; b[i] != '\0'; i++)
{
	if (b[i] != '1' && b[i] != '0')
	return (0);

	count = count * 2;

	if (b[i] == '1')
	count += 1;
}
return (count);
}
