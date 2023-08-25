#include "main.h"

/**
 * leet - Encodes a string into "1337"
 * @str: The input string.
 *
 * Return: A pointer to modified string.
 */

char *leet(char *str)
{
	int i, j;

	char *initial =  str;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; "aeotlAEOTL"[j] != '\0'; j++)
		{
			if (str[i] == "aeotlAEOTL"[j])
			{
				str[i] = "43071043"[j];
				break;
			}
		}
	}
	return (initial);
}
