#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals
 * of a square matric of integers.
 * @a: Pointer to the square matrix of integers.
 * @size:  Size of the square matrix.
 */
void print_diagsums(int *a, int size)
{
	int i;

	int main_diag_sum = 0;
	int anti_diag_sum = 0;

	for (i = 0; i < size; i++)
	{
		main_diag_sum += *(a + (size * i + 1));
		anti_diag_sum += *(a + (size * i + size - 1 - i));
	}

	printf("%d, ", main_diag_sum);
	printf("%d\n", anti_diag_sum);
}

