#include <stdio.h>
#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: first pointer to an integer.
 * @b: second pointer to an integer.
 *
 */
void swap_int(int *a, int *b)
{
	int c = *b;
	*b = *a;
	*a = c;

}
