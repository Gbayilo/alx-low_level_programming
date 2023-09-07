#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings up to n bytes
 * @s1: The first string
 * @s2: The second string
 * @n: The maximum number of bytes to concatenate from s2
 *
 * Return: A pointer to the concatenated string.
 * If malloc fails or NULL is passed, return NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
		n = len2;
	result = malloc(len1 + n + 1);

	if (result == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		result[i] = s1[i];

	for (i = 0; i < n; i++)
		result[len1 + i] = s2[i];

	result[len1 + n] = '\0';

	return (result);


}
