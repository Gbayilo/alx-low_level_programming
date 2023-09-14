#include "function_pointers.h"

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: 0 on success, 1 on incorrect arguments,
 * 2 on negative number of bytes
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc != 2)
	{
		fprintf(stderr, "Error: Incorrect number of arguments\n");
		return (1);
	}

	int num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		fprintf(stderr, "Error: Number of bytes cannot be negative\n");
		return (2);
	}

	unsigned char *main_ptr = (unsigned char *)&main;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", main_ptr[i]);
	}
	printf("\n");

	return (0);
}


