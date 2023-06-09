#include <stdio.h>
#include "main.h"

/**
 * main - Multiplication of two numbers
 * @argc: The number of arguments
 * @argv: The array of arguments
 *
 * Return: 0 (success muliplication of two num), 1(error - more than two num)
 */
int main(int argc, char *argv[])
{
	int answer, Num1, Num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	Num1 = _atoi(argv[1]);
	Num2 = _atoi(argv[2]);
	answer = Number1 * Num2;

	printf("%d\n", answer);

	return (0);
}
