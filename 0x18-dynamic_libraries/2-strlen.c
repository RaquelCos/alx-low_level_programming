#include "main.h"

/**
 * _strlen - Return length of str
 * @s: Str envaluted
 *
 * Return: Length of str
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
