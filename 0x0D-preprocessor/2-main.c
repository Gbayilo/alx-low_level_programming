#include <stdio.h>

/**
 * main - Prints the name of a file it was compiled from.
 *
 * Return: 0 Always on success
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
