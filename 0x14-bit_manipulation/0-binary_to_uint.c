#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @binary_string: A pointer to a string of 0 and 1 characters.
 *
 * Return: The converted number, or 0 if an invalid character is encountered
 * or if 'binary_string' is NULL.
 */
unsigned int binary_to_uint(const char *binary_string)
{
	unsigned int decimal_result = 0;
	unsigned int binary_base = 1;
	int i;

	if (binary_string == NULL)
		return (0);

	for (i = 0; binary_string[i] != '\0'; i++)
	{
		if (binary_string[i] != '0' && binary_string[i] != '1')
			return (0);
		decimal_result = decimal_result * 2 + (binary_string[i] - '0');

	}

	return (decimal_result);
}
