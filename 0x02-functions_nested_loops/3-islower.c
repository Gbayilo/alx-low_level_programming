#include "main.h"

/**
 * *_islower - checks for lowercase character,
 * returns 1 if letter is lowercase,
 * returns 0 if it is not.
 * @ch: character to check
 * Return: 1 if lowercase, 0 if not lowercase
 */

int _islower(int ch)
{
	if (ch >= 'a' && ch <= 'z')
		return (1);
	else
		return (0);
}
