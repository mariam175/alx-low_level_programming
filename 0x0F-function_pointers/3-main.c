#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - Entry point
 *@argc:number of arguments
 *@argv:array point to arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int (*op)(int, int);
	int res;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	op = get_op_func(argv[2]);

	if (op == 0)
	{
		printf("Error\n");
		exit(99);
	}
	res = op(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", res);
	return (0);
}
