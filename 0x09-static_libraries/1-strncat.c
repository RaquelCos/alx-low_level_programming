#include "main.h"

/**
 * _strncat - Concatenates n bytes from one string to another
 * @dest: The destination string
 * @src: The source string
 * @n: The number of bytes of str to concatenate
 *
 * Return: A pointer ing the resulting string(dest)
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
