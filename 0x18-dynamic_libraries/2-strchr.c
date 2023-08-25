#include "main.h"
#include <stdio.h>

/**
 * _strchr - Locates a char in a str
 * @s: String searched
 * @c: Char to find
 *
 * Return: Pointer to first occurance of char, NULL char not found
 */
char *_strchr(char *s, char c)
{
	int a;

	while (1)
	{
		a = *s++;
		if (a == c)
		{
			return (s -1);
		}
		if ( a == 0)
		{
			return (NULL);
		}
	}
}
