#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: prints all the numbers of base16
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int dec, hex;

	for (dec = 48; dec <= 57; dec++)
	{
		putchar(dec);
	}
	for (hex = 97; hex <= 102; hex++)
	{
		putchar(hex);
	}
	putchar('\n');
	return (0);
}
