#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point of the program
 *
 * Description: Generates a random number and tests if last digit of the
 * random number is greater than 5, is zero or less than 6 and not 0
 *
 * Return: Always 0 on success
 */
int main(void)
{
	int n, lastDigit;
		srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;

	if (lastDigit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
	else if (lastDigit == 0)
		printf("Last digit of %d is %d and is 0\n", n, lastDigit);
	else
		printf("Last digit of %d is %d and is less" 
				"than 6 and not 0\n",
				n, lastDigit);

	return (0);
}
