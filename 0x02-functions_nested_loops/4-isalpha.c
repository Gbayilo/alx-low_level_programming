#include "main.h"

/**
 * _isalpha - checks for alphabetic character.
 * @ch: the character to be checked
 * Return: 1 if ch is a letter, lowercase or uppercase and 0 otherwise.
 */

int _isalpha(int ch)
{
	if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
		return (1);
	else
		return (0);

}
