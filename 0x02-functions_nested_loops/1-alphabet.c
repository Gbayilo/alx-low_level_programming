#include "main.h"

/**
 * print_alphabet - Print alphabet in lowercase using only `_putchar`
 * Return: 0
 */

void print_alphabet(void)
{
	char myLetter;

	for (myLetter = 'a'; myLetter <= 'z'; myLetter++)
	{
		_putchar(myLetter);
	}
	_putchar('\n');
}
