#include <unistd.h>

/**
 * _putchar - writes a charcter to the stdout
 * @c: character to be printed to the output
 *
 * Return: 1 on success.
 * On error, -1 is returned.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
