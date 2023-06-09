#include "main.h"

/**
 * _isalpha - Checks for alphabetic char
 * @c: The char being checked
 * 
 * Return: c is 1 if a letter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
