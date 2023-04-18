#include "dog.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_dog - function that prints a struct dog
 * @d: pointer to the struct dog
 *
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
