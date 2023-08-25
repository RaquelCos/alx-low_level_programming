#include "main.h"
#include <stdio.h>

/**
 * *strpbrk - Searches a str for any set of bytes
 * @s: String being searched
 * @accept: String containing bytes to look for
 *
 * Return: Pointer to byte that matches or NULL if no matching byte
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if  (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
