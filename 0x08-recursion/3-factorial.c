#include "main.h"

/**
 * factorial - Calculate the factorial of a given number.
 * @n: The number for which factorial is calculated.
 *
 * Return: Factorial of n. -1 if n is negative.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
