#include "main.h"

/**
 * _strlen_recursion - functions that calculates the length of the string
 * @s: string being calculates for its length
 *
 * Return value - Length of  string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
