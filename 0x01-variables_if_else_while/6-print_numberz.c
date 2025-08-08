#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all single digit numbers of base 10
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int var;

	for (var = 48; var <= 57; var++)
	{
		putchar(var);
	}
	putchar('\n');
	return (0);
}
