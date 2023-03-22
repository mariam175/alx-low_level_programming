#include <stdio.h>
#include "3-calc.h"
/**
 *op_add - add two numbers
 *@a: num1
 *@b:num2
 * Return: sum of the two numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - sub two numbers
 *@a: num1
 *@b:num2
 * Return: sub of the two numbers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - mul two numbers
 *@a: num1
 *@b:num2
 * Return: multiply of the two numbers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - divide two numbers
 *@a: num1
 *@b:num2
 * Return: division of the two numbers
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 *op_mod - ...
 *@a: num1
 *@b:num2
 * Return: ...
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
