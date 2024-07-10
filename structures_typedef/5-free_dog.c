#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - Entry point
 * @d: Pointer to the `dog` structure
 * @dog_t: standby
 * Description: print infos
 */
void free_dog(dog_t *d)
{
  if (d != NULL)
  {
    free(d->name);
    free(d->owner);
    free(d);
  }
}