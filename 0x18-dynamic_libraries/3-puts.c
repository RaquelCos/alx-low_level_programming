#include "main.h"

/**
 * _puts - Prints a str to stdout
 * @s: Pointer to str printed
 */
void _puts(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
