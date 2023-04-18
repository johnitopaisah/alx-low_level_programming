#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - function that creates a new dog
 * @name: pointer to the dog's name
 * @age: age of the dog
 * @owner: pointer to the dog's owner
 *
 * Return: pointet to the new dog, or NULL if memory allocation fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int name_len, owner_len;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}

	name_len = strlen(name);
	owner_len = strlen(owner);

	new_dog->name = malloc((name_len) * sizeof(char));
	new_dog->owner = malloc((owner_len) * sizeof(char));

	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}

	strncpy(new_dog->name, name, name_len);
	strncpy(new_dog->owner, owner, owner_len);
	new_dog->age = age;

	new_dog->name[name_len] = '\0';
	new_dog->owner[owner_len] = '\0';

	return (new_dog);
}
