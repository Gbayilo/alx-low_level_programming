#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: computes and prints the sum of all the multiples
 * of 3 and 5 below 1024 (xcluded).
 *
 * Return: 0 on success.
 */
int main(void)
{
	int i, sum;

	i = 1023;
	sum = 0;

	for (; i > 0; i--)
		if (i % 5 == 0 || i % 3 == 0)
			sum += i;

	printf("%d\n", sum);
	return (0);
}
