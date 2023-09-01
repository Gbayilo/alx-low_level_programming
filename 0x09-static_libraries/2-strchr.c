#include "main.h"
#include <stddef.h>

/**
 * _strchr - Locates character in a string.
 * @s: Pointer to the string to be searched.
 * @c: The character to be located.
 *
 * Return: Pointer to the first occurrence of c in s,
 * NULL if not found.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
