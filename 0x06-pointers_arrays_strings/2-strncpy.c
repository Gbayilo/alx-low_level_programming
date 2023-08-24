#include "main.h"

/**
 * _strncpy - Copies a string from src to dest, up to n bytes.
 * @dest: The destination buffer.
 * @src: The source string.
 * @n: The maximum number of bytes to copy from src.
 *
 * Return: A pointer to the resultimg string (dest).
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *initial_dest = dest;

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}

	return (initial_dest);
}
