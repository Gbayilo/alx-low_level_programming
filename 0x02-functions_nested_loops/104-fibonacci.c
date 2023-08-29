#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: prints the first 98 Fibonacci numbers, starting with 1 and 2,
 * followed by a new line.
 *
 * Return: Always 0 on success.
 */
int main(void)
{
	unsigned long a1, a2, a3, sum1;
	unsigned long b1, b2, b3, sum2;
	int i;

	printf("1, 2");
	for (a1 = 1, b1 = 2, i = 1; i < 90; i++)
	{
		sum1 = a1 + b1;
		printf(", %lu", sum1);
		a1 = b1;
		b1 = sum1;
	}
	printf(", ");
	a2 = a1 % 1000;
	a1 = a1 / 1000;
	b2 = b1 % 1000;
	for (; i < 97; i++)
	{
		sum2 = (a2 + b2) / 1000;
		a3 = (a2 + b2) - sum2 * 1000;
		b3 = (a1 + b1) + sum2;
		a2 = b2;
		b2 = a3;
		if (b3 > 0)
		{
			if (a3 >= 100)
				printf("%lu%03lu", b3, a3);
			else if (a3 >= 10)
				printf("%lu%02lu", b3, a3);
			else
				printf("%lu", a3);

		if (i != 96)
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}

