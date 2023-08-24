#include "main.h"

#define TRUE 1
#define FALSE 0

/**
 * is_separator - Checks if a character is a word separator.
 * @c: The charater to check.
 *
 * Return: TRUE if c is a separator, otherwise FALSE.
 */
int is_separator(char c)
{
	char separator[] = "\t\n,;.!?\"(){}";

	for (int i = 0; separators[i] != '\0'; i++)
	{
		if (c == separators[i])
		{
			return (TRUE);
		}

	}
	return (FALSE);
}

/**
 * cap_string - Capitalizes all words in a string
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
	int new_word = TRUE;

	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (is_separator(str[i]))
		{
			new_word = TRUE;
		}
		else if (new_word)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 'a' + 'A'
			}
			new_word = FALSE;
		}
	}

	return (str);
}
