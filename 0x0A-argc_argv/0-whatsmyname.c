#include <stdio.h>
#include "main.h"

/**
 * main - Prints out the name of the program
 * @argc: The number of argumens
 * @argv: The array of arguments
 *
 * Return: 0 - means successful
 */
int main(int argc, __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
