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
	void *new_ptr;

	if (ptr == NULL)
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
		else
		{
			return (malloc(new_size));
		}
	}
	else if (new_size == old_size)
	{
		return (ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	if (new_size > old_size)
		memcpy(new_ptr, ptr, old_size);
	else
		memcpy(new_ptr, ptr, new_size);

	free(ptr);

	return (new_ptr);
}
