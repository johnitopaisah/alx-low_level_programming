#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	dog_t *my_dog;

	my_dog = my_dog("Poppy", 3.5, "Bob");
	print("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
	free_dog(my_dog);
	return (0);
}
