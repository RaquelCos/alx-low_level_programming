#include "main.h"

/**
 * _strlen - Returns length of a string
 * @s: String evaluated
 *
 * Return: Length of string
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
