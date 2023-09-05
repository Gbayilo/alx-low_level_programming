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
	char *concatenated;
	int i, j, totalLength = 0;
	int newlineCount = ac - 1;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			totalLength++;
		}
	}
	totalLength += newlineCount;
	concatenated = (char *)malloc(sizeof(char) * (totalLength + 1));

	if (concatenated == NULL)
	{
		return (NULL);
	}
	for (i = 0, j = 0; i < ac; i++)
	{
		while (av[i][j] != '\0')
		{
			*concatenated = av[i][j];
			concatenated++;
			j++;
		}
		if (i < ac - 1)
		{
			*concatenated = '\n';
			concatenated++;
		}
		j = 0;
	}
	*concatenated = '\0';
	return (concatenated - totalLength);
}
