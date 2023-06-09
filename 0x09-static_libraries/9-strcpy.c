#include "main.h"

/**
 * *_strcpy - Copies the string pointed to by src including the null byte (\0)
 * to the buffer pointed to by dest
 * @dest: A pointer to the buffer in which copies the string
 * @src: String being copied
 *
 * Return: A pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
