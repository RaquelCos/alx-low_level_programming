#include "main.h"
#include <stdio.h>

/**
 * *_strchr - Locates a character in a string
 * @s:The string being search
 * @c: The char being searched for
 *
 * Return: A pointer to the first occurrence of the char c in the string is s, or NULL if the char is not found
 */
char *_strchr(char *s, char c)
{
		int a;

		while (1)
		{
			a = *s++;
			if (a == c)
			{
				return (s - 1);
			}
			if (a == 0)
			{
				return (NULL);
			}
		}
}
