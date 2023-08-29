#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: Prints the 50 first fibonacci number
 * starting from 1 and 2.
 *
 * Return: 0 on success.
 */
int main(void)
{
	long int a = 1, b = 2;
	long int sum;

	int i;

	printf("%ld, %ld", a, b);

	for (i = 0; i < 48; i++)
	{
		sum = a + b;
		printf(", %ld", sum);
		a = b;
		b = sum;
	}
	printf("\n");
	return (0);
}
