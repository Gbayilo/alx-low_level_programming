#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - Reallocates a memory block
 * @ptr: Pointer to the previously allocated memory
 * @old_size: Size of the allocated space for ptr (in bytes)
 * @new_size: New size of the memory block (in bytes)
 *
 * Return: A pointer to the reallocated memory block
 * If new_size == old_size, return ptr
 * If new_size > old_size, the added memory is uninitialized
 * If new_size == 0 and ptr is not NULL, return NULL and free(ptr)
 * If ptr is NULL, return a new memory block of size new_size
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (malloc(new_size));

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
		new_ptr[i] = *((char *)(ptr) + i);
	free(ptr);

	return (new_ptr);
}
