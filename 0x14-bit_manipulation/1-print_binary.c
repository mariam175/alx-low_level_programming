#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 *binary- ...
 *@n: ....
 *Return: nothing
 */
void binary(unsigned long int n)
{
	if (n == 0)
		return;
	binary(n >> 1);
	_putchar((n & 1) + '0');
}

/**
 *print_binary- ...
 *@n: ....
 *Return: nothing
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		binary(n);
}
