#include "main.h"
#include <stdio.h>

/**
 * *_strstr - Locates a sustring
 * @haystack: Str being searched
 * @needle: Substring being looked for
 *
 * Return: Pointer to located substring, NULL otherwise
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
			return (& hyastack[i]);
	}
	return (NULL);
}
