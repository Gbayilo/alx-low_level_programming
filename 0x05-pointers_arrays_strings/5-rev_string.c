#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Pointer to the string to be reversed
 *
 */
void rev_string(char *s)
{
	int lengthofString, i;
	char temp;

	while (s[lengthofString] != '\0')
	{
		lengthofString++;
	}
	for (i = 0; i < lengthofString / 2; i++)
	{
		temp = s[i];

		s[i] = s[lengthofString - 1 - i];
		s[lengthofString - 1 - i] = temp;
	}
}
