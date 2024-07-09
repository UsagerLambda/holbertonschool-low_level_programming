#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - Entry point
 * @d: Pointer to the `dog` structure to be initialized.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 * Description: Initializes `dog` structure with name, age, owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}
