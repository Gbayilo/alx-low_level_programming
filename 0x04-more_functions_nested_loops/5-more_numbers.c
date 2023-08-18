#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 t0 14
 * followed by a new line
 * Return: void
 */

void more_numbers(void)
{
	int j, k;

	for (j = 1; j <= 10; j++)
	{
		for (k = 0; k <= 14; k++)
		{
			if (k >= 10)
			_putchar('1');
			_putchar(j % 10 + '0')

		}
		_putchar('\n');
	}
}
