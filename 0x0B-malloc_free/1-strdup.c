#include <stdlib.h>
#include "main.h"

/**
 *  *_strdup - Copies string given 's' parameter
 *  @str: String being duplicated
 *
 *  Return: Pointer to @str(success) or NULL(error)
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int i, len;

	i = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
		return (NULL);

	while ((dup[i] = str[i]) != '\0')
		i++;

	return (dup);
}
