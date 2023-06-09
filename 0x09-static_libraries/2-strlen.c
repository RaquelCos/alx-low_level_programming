#include "main.h"

/**
 * _strlen - Gives the length of a string
 * @s: String being evaluate for length
 *
 * Return: The length of string(s)
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
