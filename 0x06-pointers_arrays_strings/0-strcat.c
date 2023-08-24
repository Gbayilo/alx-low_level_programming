#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: string that is append to.
 * @src: the source string
 *
 * Return: A pointer to the resulting string (dest).
 */

char *_strcat(char *dest, char *src)
{
	char *initial_dest = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (initial_dest);

}
