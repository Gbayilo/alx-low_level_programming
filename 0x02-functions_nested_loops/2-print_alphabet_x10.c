#include "main.h"

/**
 * print print_alphabet_x10 -print 10 times the alphabet, in lowercase,
 * followed by a new line.
 * Return 0
 */

void print_alphabet_x10(void)
{	
	char character;
	int  i = 0;
	while (i < 10)
	{
		character = 'a';
		while (character <= 'z')
		{
			_putchar(character);
			character++;
		}
		_putchar('\n');
		i++;
	}
}
