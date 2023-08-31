#include "main.h"
/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 * @n: The number for which square root is calculated.
 *
 * Return: The natural square root of n. -1 if n doesn't have a natural square
 */
int _sqrt_recursion(int n)
{
	return (sqrt_helper(n, 1));
}

/**
 * sqrt_helper - Recursive helper function to find the square root.
 * @n: The number for which the square root is calculated.
 * @guess: The current guess for the square root.
 *
 * Return: The natural square root of n. -1 if n doesn't have a natural square.
 */
int sqrt_helper(int n, int guess)
{
	if (n < 0)
	{
		return (-1);
	}
	if (guess * guess == n)
	{
		return (guess);
	}
	else if (guess * guess > n)
	{
		return (-1);
	}
	else
	{
		return (sqrt_helper(n, guess + 1));
	}
}
