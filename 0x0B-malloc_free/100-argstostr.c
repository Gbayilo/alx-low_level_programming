#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - Concatenates all program arguments into a string
 * @ac: The argument count.
 * @av: An array of argument strings
 *
 * Return: On success, returns a pointer to the concatenated string.
 * Returns NULL if ac is 0, av is NULL, or memory allocation fails
 */
char *argstostr(int ac, char **av)
{
	char *str, *a;
	int i, j, totalLength;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0, totalLength = 0; i < ac; i++)
	{
		for (j = 0; *(*(av + i) + j) != '\0'; j++, totalLength++)
			;
		totalLength++;
	}
	totalLength++;

	str = malloc(totalLength * sizeof(char));
	if (str == NULL)
		return (NULL);

	a = str;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*str = av[i][j];
			str++;
		}
		*str = '\n';
		str++;

	}

	return (a);
}
