#include "main.h"
#include <stdio.h>
/**
 * _putchar - writes the character c
 * @c: the character to print
 * Return: 1(Sucess) and -1(On error)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
