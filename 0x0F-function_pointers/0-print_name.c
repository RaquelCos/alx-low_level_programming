#include <stdlib.h>
#include "functon_pointers.h"

/**
 *  print_name - Function that prints out a name
 *  @name: Name being printed
 *  @f: Pointer to printing function (print_name)
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
