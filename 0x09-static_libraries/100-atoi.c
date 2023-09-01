#include "main.h"

/**
 * _atoi - Convert string to an integer.
 * @s: pointer to the string to be converted.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
	int i, sign = 1;
	unsigned int number = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			sign = -sign;
		}
		else if (s[i] >= 48 && s[i] <= 57)
		{
			number = number * 10 + s[i] - '0';

			if  (s[i + 1] < 48 || s[i + 1] > 57)
			{
				break;
			}
		}


	}


	return (number * sign);
}

