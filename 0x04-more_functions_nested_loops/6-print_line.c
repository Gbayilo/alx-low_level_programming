#include "main.h"

/**
 * print_line - draws atraight line in the terminal
 * @n numner of times _ is printed
 * Returm: void
 */

void print_line(int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
