#include "main.h"

/**
 * _pow_recursion - functions that returns the value of x after being powered by y
 * @x: value to be powered
 * @y: power value
 *
 * Return: result of x powered by y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
