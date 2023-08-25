#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @str: string
 *
 * Return: str
 */
char *cap_string(char *str)
{
	int i, j;
	char a[] = " \t\n,;.!?\"(){}";

	i = 0;


	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0)
				str[i] -= 'a' - 'A';
			else
			{
				for (j = 0; a[j] != '\0'; j++)
				{
					if (a[j] == str[i - 1])
					{
						str[i] -= 'a' - 'A';
						break;
					}
				}
			}

		}
		i++;
	}
	return (str);
}
