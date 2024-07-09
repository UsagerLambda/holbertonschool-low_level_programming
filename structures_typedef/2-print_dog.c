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
if (d->name == NULL)
printf("Name: (nil)");
else
printf("Name: %s\n", d->name);
if (d->age < 0)
printf("Age: (nil)");
else
printf("Age: %f\n", d->age);
if (d->owner == NULL)
printf("Owner: (nil)");
else
printf("Owner %s\n", d->owner);
}
