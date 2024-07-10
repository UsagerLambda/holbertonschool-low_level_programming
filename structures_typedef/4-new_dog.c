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
	dog->name = _strdup(name);
	if (dog->name == NULL)
{
	free(dog);
	return (NULL);
}
	dog->owner = _strdup(owner);
	if (dog->owner == NULL)
{
	free(dog->name);
	free(dog);
	return (NULL);
}
	dog->age = age;
	return (dog);
}

/**
 * _strdup - Entry point
 * @str: string to copy
 * Description : return a pointer that contain a copy of str
 * Return: Always 0.
 */
char *_strdup(char *str)
{
char *array;
int i = 0;
if (str == NULL)
return (NULL);
while (str[i] != '\0')
i++;
array = malloc(sizeof(char) * (i + 1));
if (array == NULL)
return (NULL);
i = 0;
while (str[i] != '\0')
{
array[i] = str[i];
i++;
}
array[i] = '\0';
return (array);
}
