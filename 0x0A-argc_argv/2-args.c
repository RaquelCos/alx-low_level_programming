#include <stdio.h>
#include "main.h"

/**
 * main - Prints out all the arguments received
 * @argc: The number of arguments
 * @argv: The array of arguments
 *
 * Return: 0(success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
