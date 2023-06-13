#include <stdlib.h>
#include "main.h"

/**
 *  *create_array - makes an array of chars & intializes it with specific char
 *  @size: Size of array created
 *  @c: Char intialized
 *
 *  Return: Pointer to array(suceess) or NULL(error)
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	p = (char *) malloc(sizeof(char) * size);

	if (p == NULL)
		return (0);

	while (i < size)
	{
		*(p + 1) = c;
		i++;
	}

	*(p + 1) = '\0';

	return (p);
}
