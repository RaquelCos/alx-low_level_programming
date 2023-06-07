#include "main.h"

int real_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - Function that returns natural sqr of a number
 * @n: Number used to calculate the sqr root of
 *
 * Return: Sqr root result
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (real_sqrt_recursion(n, 0));
}

/**
 * real_sqrt_recursion - Recurses to find the natural sqr root of a number
 * @n: Number used to calculate the sqr root of
 * @i: the iterator
 *
 * Return: Sqr root result
 */
int real_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (1);
	return (real_sqrt_recursion(n, i + 1));
}
