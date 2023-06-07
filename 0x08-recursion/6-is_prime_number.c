#include "main.h"

int real_prime_number(int n, int i);

/**
 * is_prime_number - Tells if number is a prime number or not
 * @n: number being evaluated
 *
 * Return: If prime number returns 1 and if not returns 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (real_prime_number(n, n - 1));
}

/**
 * real_prime_number - Calculates if number prime or not(recursively)
 * @n: Number being evaluated
 * @i: iterator
 *
 * Return: If prime nummber returns 1 and if not returns 0
 */
int real_prime_number(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && 1 > 0)
		return (0);
	return (real_prime_number(n, i - 1));
}
