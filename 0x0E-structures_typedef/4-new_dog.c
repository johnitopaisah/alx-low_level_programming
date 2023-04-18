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

	/* Allocate memry for new dog and its strings in a single call to malloc */
	dog_t *new_dog = malloc(sizeof(dog_t) + (name_len + 1) + (owner_len + 1));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	
	/* Set pointes to name and owner stings in the new dog */
	new_dog->name = (char *)new_dog + sizeof(dog_t);
	new_dog->owner = new_dog->name + (name_len + 1);

	/* Copy name and owner strings to the new dog */
	strcpy(new_dog->name, name);
	strcpy(new_dog->owner, owner);

	/* Set age member of the new dog */
	new_dog->age = age;

	return (new_dog);
}
