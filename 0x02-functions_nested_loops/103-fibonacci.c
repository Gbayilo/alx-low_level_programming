#include <stdio.h>

/**
 * main - Entry point.
 *
 * Return: 0 on success.
 */
int main(void)
{
	long int a = 0, b = 1, sum = 0, result = 0;
	int i;

	for (; sum < 4000000; i++)
	{
		sum = a + b;
		a = b;
		b = sum;
		if (sum % 2 == 0)
			result += sum;
	}
	printf("%ld\n", result);
	return (0);
}
