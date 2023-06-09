#include "main.h"

/**
 * _strncpy - Copies a string
 * @dest: The destination string
 * @src: The source string
 * @n: Number of bytes to be copy
 *
 * Return: A pointer in the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
