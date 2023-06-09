#include "main.h"

/**
 * *_memcpy - Copies the memory area
 * @dest: The destination memory area
 * @src: The memory area being copied from
 * @n: Number of bytes to copy
 *
 * Return: Pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
