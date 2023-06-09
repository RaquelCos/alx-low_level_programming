#include "main.h"

/**
 * _strcat - Concatenates the two strings
 * @dest: String to append to
 * @src: String to add to
 *
 * Return: A pointer in the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
