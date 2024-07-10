#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - Entry point
 * @name: name of the cloned dog
 * @age: age of the cloned dog
 * @owner: owner of the cloned dog
 * Return: return
 * Description: print infos
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (name == NULL || owner == NULL)
	return (NULL);

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
