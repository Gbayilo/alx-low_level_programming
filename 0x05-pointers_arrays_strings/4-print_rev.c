#include <stdio.h>
#include "main.h"

/**
 * print_rev - Prints a string, in reverse,
 * followed by a new line.
 * @s: Pointer to the string to be printed in reverse
 *
 */
void print_rev(char *s)
{
	int len;

	len = 0;

	for (; s[len] != '\0'; len++)
	{
		int i;

		for (i = len - 1; i >= 0;  i--)
		_putchar(s[i]);
	}
	_putchar('\n');
}
