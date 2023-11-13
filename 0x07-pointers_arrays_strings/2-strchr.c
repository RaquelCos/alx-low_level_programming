#include "main.h"
#include <stdio.h>

/**
 * *_strchr - Locates a char in a str
 * @s: String searched
 * @c: char to find
 *
 * Return: A pointer to the first occurence of char c in str s
 * or NULL if char not found
 */
char *_strchr(char *s, char c)
{
	int alpha;

	while (1)
	{
		alpha = *s++;
		if (alpha == c)
		{
			return (s - 1);
		}
		if (alpha == 0)
		{
			return (NULL);
		}
	}
}
