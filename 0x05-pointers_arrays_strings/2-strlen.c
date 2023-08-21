#include <stdio.h>
#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: pointer to the string
 *
 * Return: string length.
 */
int _strlen(char *s)
{
	int lengthofString = 0;

	for (; *s  != '\0'; s++)
	{
		lengthofString++;
	}
	return (lengthofString);
}
