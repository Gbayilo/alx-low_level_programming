#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all possible combinations
 * of a single-digit numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ascii_dec;

	for (ascii_dec = 48; ascii_dec < 58; ascii_dec++)
	{
		putchar(ascii_dec);
		if (ascii_dec < 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
