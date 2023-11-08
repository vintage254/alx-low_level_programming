#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point for a simple calculator program.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line arguments.
 * Return: 0 on success, non-zero on error.
 */
int main(int argc, char *argv[])
{
	int (*optr)(int, int);
	int num1;
	int num2;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	optr = get_op_func(argv[2]);
	if (!optr)
	{
		printf("Error\n");
		return (99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
    printf("%d\n", optr(num1, num2));
    return (0);
}
