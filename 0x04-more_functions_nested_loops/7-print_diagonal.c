#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: number of \ to be printed
 * Return: void
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int j, k;

		for (j = 0; j < n; j++)
		{
			for (k = 0; k < n; k++)
			{
				if (k == j)
					_putchar('\\');
				else if (k < j)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}


}
