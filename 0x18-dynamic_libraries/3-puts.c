#include "main.h"

/**
 * _puts - Prints a str to stdout
 * @str: Pointer to str printed
 */
void _puts(char *s)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
