#include <stdio.h>
#include <string.h>
#include "3-calc.h"
/**
 *get_op_func - ...
 *@s: operator passed as argument to the program
 * Return: ...
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	for (i = 0; i < 5; i++)
	{
		if (s == ops[i].op)
			return (ops[i].f);
	}
	return (0);
}
