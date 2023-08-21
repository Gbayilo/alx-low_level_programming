#include "main.h"

/**
 * puts_half - Prints half of a string, followed by a new line.
 * @str: pointer to the string to be printed
 *
 */
void puts_half(char *str)
{
	int i, length, index;

	length = 0;


	while (str[length] != '\0')
	{
		length++;
	}
	if (length % 2 == 1)
	{
		index = length / 2;
	}
	else
	{
		index = (length - 1) / 2;
	}

	for (i = index; i < length; i++)
		_putchar(str[i]);

	_putchar('\n');
}

