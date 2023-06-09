#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - Searches for any set of bytes in a string
 * @s: String being search
 * @accept: The string containing the bytes looked for
 *
 * Return: Pointer to the byte in s matches one of the bytes in accept
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
