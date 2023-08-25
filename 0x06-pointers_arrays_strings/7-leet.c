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

	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (a[j] == str[i])
			{
				str[i] = b[j];
				break;
			}
		}
	}
	return (str);
}
