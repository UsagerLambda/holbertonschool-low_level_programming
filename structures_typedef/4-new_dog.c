#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - Entry point
 * @d: Pointer to the `dog` structure
 * @name:
 * @age:
 * @owner:
 * Description: print infos
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    if (name == NULL || age == 0 || owner == NULL)
    return (NULL);
    dog_t *dog;

    dog = malloc(sizeof(dog_t));
    if (dog == NULL)
    return (NULL);
	dog->age = age;
    dog->name = _strdup(name);
    if (dog->name == NULL)
    {
    free(dog);
    return (NULL);
}
    dog->owner = _strdup(owner);
    {
      free(dog->name);
    free(dog);
    return (NULL);
}
    return (dog);
}
