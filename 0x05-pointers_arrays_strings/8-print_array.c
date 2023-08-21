#include <stdio.h>
#include "main.h"

/**
 * print_array - prints elements of an array of integers
 * followed by a new line.
 *
 * @a: ponter to the array of integers.
 * @n: number of elements to be printed from the array
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}

	printf("\n");
}
