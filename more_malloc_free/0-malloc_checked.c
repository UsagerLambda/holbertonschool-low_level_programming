#include <stdlib.h>
/**
 * malloc_checked - Entry point
 * @b: value
 * Description : allocates memory
 * Return: Always 0.
 */
void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);
if (ptr == NULL)
exit(98);
return (ptr);
}
