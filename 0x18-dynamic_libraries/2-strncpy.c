#include "main.h"

/**
 * _strncpy - Copies a str
 * @dest: Destination str
 * @src: Source str
 * @n: Number of bytes to copy
 *
 * Return: Pointer to resulting str
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
