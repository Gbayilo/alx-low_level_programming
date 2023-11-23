#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @binary: A pointer to a string of 0 and 1 characters.
 *
 * Return: The converted number, or 0 if an invalid character is encountered
 * or if 'binary' is NULL.
 */
unsigned int binary_to_uint(const char *binary)
{
	unsigned int result = 0;
	int i;

	if (binary == NULL)
		return (0);

	for (i = 0; binary[i] != '\0'; i++)
	{
		if (binary[i] != '0' && binary[i] != '1')
			return (0);
		result = result * 2 + (binary[i] - '0');

	}

	return (result);
}
