#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - Information about the dog
 * @name: Pointer to a string representing the dog's name
 * @age: The age of the dog as a floating-point number
 * @owner: Pointer to a string representing the owner's name
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
