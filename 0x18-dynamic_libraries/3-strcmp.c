#include "main.h"

/**
 * _strcmp - Compares two str
 * @s1: First string
 * @s2: Second String
 *
 * Return: <0 if s1 is less than s2, 0 - equal, >0 si greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
