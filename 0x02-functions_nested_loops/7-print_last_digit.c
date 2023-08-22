#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @n: the integer that we get the last digit from
 *
 * Return: the value of the last digiti
 */

int print_last_digit(int n)
{
	int lastDigit = n % 10;

	if (lastDigit < 0)
	{
		lastDigit *= -1;
	}

	_putchar(lastDigit + '0');

	return (lastDigit);
}
