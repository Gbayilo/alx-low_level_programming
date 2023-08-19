#include <stdio>;

/**
 * main -prints the numbers from 1 to 100, followed by a new line.
 * Description: for multiples of three print Fizz instead of the number
 * and for the multiples of five print Buzz.
 * For numbers which are multiples of both three and five print FizzBuzz.
 * Return: 0
 */

int main(void)
{
	int j;

	j = 1;

	while (j <= 100)
	{
		if (j % 3 == 0 && j % 5 == 0)
			printf("FizzBuzz");
		else if (j % 3 == 0)
			printf("Fizz");
		else if (j % 5 == 0)
			printf("Buzz");
		else
			printf("%i", j);

		if (j != 100)
			printf(" ");
		j++
	}
	printf("\n");

	return (0);
}
