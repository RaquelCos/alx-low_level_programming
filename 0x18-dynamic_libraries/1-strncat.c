#include "main.h"

/**
 * _strncat - Concats n bytes from str to another
 * @dest: Destination string
 * @src: Source string
 * @n: Number of bytes of strings to concat
 *
 * Return: Pointer to resulting dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
