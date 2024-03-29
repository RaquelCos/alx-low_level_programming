#include "main.h"

/**
 * _isalpha - Checks for alphabetic characters
 * @c: Character checked
 * Return: 1 (c is characters), 0 (otherwise)
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
