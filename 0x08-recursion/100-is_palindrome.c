#include "main.h"

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 *
 * Return: if s is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);

	return (palindrome_helper(s, 0, length - 1));
}

/**
 * palindrome_helper - Recursive helper function
 * to check if a string is palindrome.
 * @s: The string to be checked.
 * @start: The starting index.
 * @end: The ending index.
 *
 * Return: 1 if s is a palindrome, 0 otherwise.
 */
int palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	return (palindrome_helper(s, start + 1, end - 1));
}

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string whose length is to be calculated.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));

	}
}
