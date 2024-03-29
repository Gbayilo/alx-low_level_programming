#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creates an array of characters and
 * initializes it with a specific character
 * @size: The size of the array to create
 * @c: The character with which to initialize each element of the array
 *
 * Return:If size is 0 or if memory allocation fails, returns NULL.
 * Otherwise, returns a pointer to the created array.
 */
char *create_array(unsigned int size, char c)
{
	char *array = (char *)malloc(sizeof(char) * size);
	unsigned int i;

	if (size == 0)
	{
		return (NULL);

	}

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
