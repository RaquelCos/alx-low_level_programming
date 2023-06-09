#include <stdio.h>
#include "main.h"

/**
 * main - Prints number of arguments passed to the programm
 * @argc: The number of arguments
 * @argv: The array of arguments
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[] _attribute_((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
