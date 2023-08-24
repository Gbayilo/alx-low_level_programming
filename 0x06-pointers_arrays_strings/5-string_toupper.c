#include "main.h"

/**
 * string_toupper - Changes all lowercase letters to uppercase in a string.
 * @str: input string.
 *
 * Return: A pointer to the modified string.
 */
char *string_toupper(char *str)
{
	char *initial = str;

	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - 'a' + 'A';
		}
		str++;
	}

	return (initial);
}
