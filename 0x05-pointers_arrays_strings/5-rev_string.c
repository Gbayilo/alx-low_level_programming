#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Pointer to the string to be reversed
 *
 */
void rev_string(char *s)
{
	int length1, length2, i;
	char temp;

	while (s[length1] != '\0')
	{
		length1++;
	}
	length2 = length1 - 1;
	for (i = 0; i < length1 / 2; i++)
	{
		temp = s[i];

		s[i] = s[length2];
		s[length2] = temp;
	}
}
