#include <stdio.h>
/**
 * _memcpy - copies memory area.
 * @dest: Pointer to the destination memory area.
 * @src: Pointer to the source memory area.
 * @n: Number of bytes to copy.
 *
 * Return: Pointer to te destination memory area (dest).
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *dest_ptr = dest;

	for (i = 0; i < n; i++)
	{
		dest_ptr[i] = src[i];
	}
	return (dest);
}
