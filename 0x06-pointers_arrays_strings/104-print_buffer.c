#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints buffer
 * @b: buffer
 * @size: Size
 *
 */
void print_buffer(char *b, int size)
{
	int i, j, k;

	i = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (i < size)
	{
		j = size - i < 10 ? size - i : 10;
		printf("%08x: ", i);
		for (k = 0; k < 10; k++)
		{
			if (k < j)
				printf("%02x", *(b + i + k));
			else
				printf(" ");
			if (k % 2)
			{
				printf(" ");
			}
		}
		for (k = 0; k < j; k++)
		{
			int chr = *(b + i + k);

			if (chr < 32 || chr > 126)
			{
				chr = '.';
			}
			putchar(chr);
		}
		printf("\n");
		i += 10;
	}
}
