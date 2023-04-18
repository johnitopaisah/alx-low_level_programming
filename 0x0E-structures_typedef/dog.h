#ifndef DOG_H
#define DOG_H

/**
 * struct dog - short description
 * @name: first member of the struct
 * @age: second member of the struct
 * @owner: third member of the struct
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
