#include "main.h"
#include <stddef.h>

/**
 * _strspn - Gets the length of a prefix substring
 * @s: Pointer to the string to be scanned.
 * @accept: Pointer to the string containing the characters to match.
 *
 * Return: Number of bytes in the initial segement of s
 * consisting only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;

	while (*s != '\0')
	{
		int found = 0;

		char *accept_ptr = accept;

		while (*accept_ptr != '\0')
		{
			if (*s == *accept_ptr)
			{
				found = 1;
				break;
			}
			accept_ptr++;
		}
		if (found)
		{
			length++;
			s++;
		}
		else
		{
			break;
		}

	}
	return (length);
}
