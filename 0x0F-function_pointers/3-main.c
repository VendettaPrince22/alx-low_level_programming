#include <stdlib.h>
#include "3-calc.h"
#include <stdio.h>
#include <string.h>

/**
 * main - check the code
 * @argc: number of arguments passed
 * @argv: list containing the arguments passed
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int a;
	int b;
	char *op;
	int func_addr;

	if (argc != 4)
	{
		printf("Error");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = argv[2];

	if (get_op_func(op) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if (b == 0 && strcmp(op, "/") == 0)
	{
		printf("Error\n");
		exit(100);
	}
	if (b == 0 && strcmp(op, "%") == 0)
	{
		printf("Error\n");
		exit(100);
	}
	func_addr = (*get_op_func(op))(a, b);

	printf("%d\n", func_addr);

	return (0);
}
