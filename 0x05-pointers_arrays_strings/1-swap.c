#include "main.h"

/**
 * swap_int - Swaps the values of two int
 * @a: Pointer to first value
 * @b: Pointer to Second Value
 */
void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
