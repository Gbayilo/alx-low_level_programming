#include "main.h"
#include <string.h>

/**
 * reverse_string - Reverses a string in place.
 * @str: The string to reverse.
 */

void reverse_string(char *str)
{
	int start = 0;
	int end = strlen(str) - 1;
	char temp;

	while (start < end)
	{
		temp = str[start];
		str[start] = str[end];
		str[end] = temp;

		start++;
		end--;
	}
}

/**
 * infinite_add - Adds two positive numbers represenred as strings.
 * @n1: The first number string.
 * @n2: The second number string.
 * @r: The buffer to store the result.
 * @size_r: The size of the result buffer.
 *
 * Return: A pointer to the result.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0;
	int idx_r = 0;

	while (*n1 != '\0' || *n2 != '\0' || carry > 0)
	{
		int num1 = (*n1 != '\0') ? *n1 - '0' : 0;
		int num2 = (*n2 != '\0') ? *n2 - '0' : 0;

		int sum = num1 + num2 + carry;

		carry = sum / 10;

		if (idx_r < size_r - 1)
		{
			r[idx_r] = (sum % 10) + '0';
			idx_r++;
		}
		else
		{
			return (0);
		}

		if (*n1 != '\0')
			n1++;
		if (*n2 != '\0')
			n2++;
	}

	r[idx_r] = '\0';
	reverse_string(r);

	return (r);
}

