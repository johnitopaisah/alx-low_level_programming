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
	/* Get lengths of name and owner strings */
	int name_len = strlen(name);
	int owner_len = strlen(owner);
	dog_t *new_dog;

	if (name == NULL || age < 0 || owner == NULL)
	{
		return (NULL);
	}

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}

	new_dog->name = malloc(sizeof(char) * (name_len + 1));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = malloc(sizeof(char) * (owner_len + 1));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	/* Copy name and owner strings to the new dog */
	strcpy(new_dog->name, name);
	strcpy(new_dog->owner, owner);

	/* Set age member of the new dog */
	new_dog->age = age;

	return (new_dog);
}
