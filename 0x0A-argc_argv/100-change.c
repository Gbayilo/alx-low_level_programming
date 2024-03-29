#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of thr program
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the arguments
 *
 * Return: 0 if succesful, 1 if there's an error
 */
int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;

		else if (cents >= 10)
			cents -= 10;

		else if (cents >= 5)
			coins -= 5;

		else if (cents >= 2)
			cents -= 2;

		else
			cents -= 1;
		coins++;

	}
	printf("%d\n", coins);
	return (0);
}
