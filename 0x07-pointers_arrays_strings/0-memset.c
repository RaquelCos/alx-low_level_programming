#include "main.h"

/**
 * *_memset - Fills memory with a constant byte
 * @s: Memory area filled
 * @b: Char copied
 * @n: Number of times b is copied
 *
 * Return: Pointer to s (memory area)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}


	return (s);
}
