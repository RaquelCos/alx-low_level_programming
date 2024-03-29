#include "main.h"
#include <stdio.h>

/**
 * *_strstr - Finds a substring
 * @haystack: The string to search in
 * @needle: The substring being looked for
 *
 * Return: A pointer to the beginning of located substring
 * or NULL if substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (!needle[j])
			return (&haystack[i]);
	}
	return (NULL);
}
