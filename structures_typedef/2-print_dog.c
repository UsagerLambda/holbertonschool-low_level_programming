#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - Entry point
 * @d: Pointer to the `dog` structure
 * Description: print infos
 */
void print_dog(struct dog *d)
{
if (d == NULL)
printf("(nil)");
printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
printf("Owner %s\n", d->owner);
}
