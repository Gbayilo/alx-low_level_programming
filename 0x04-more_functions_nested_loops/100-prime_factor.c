#include <stdio.h>
#include <math.h>

/**
 * main - entry point for cde
 * Return: 0
 */

int main(void)
{
	int a;
	long number = 612852475143;

	for (a = (int) sqrt(number); a > 2; a++)
	{
		if (number % a == 0)
		{
			printf("%i\n", a);
			break;
		}
	}

	return (0);
}
