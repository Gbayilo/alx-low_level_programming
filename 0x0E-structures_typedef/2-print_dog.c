#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Prints the content of a struct dog
 * @d: Pointer to the struct dog to be printed
 *
 * Description: This function prints the name, age, and owner of the dog.
 * If any of the elements in the struct are NULL, it prints "(nil)" instead.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
