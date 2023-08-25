#include "main.h"

/**
 * _isalpha - Checks for alphabetic char
 * @c: Char being checke
 * Return: 1 - c c is a letter, 0 -otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c<= 'z') || (c >= 'A' && c<= 'Z');
}
