#include "dog.h"

/**
 * free_dog - Frees a dog structure and its elements
 * @d: Pointer to the dog structure to be freed
 *
 * Description: This function frees the memory allocated for a dog structure,
 * including its name and owner.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
