#include "main.h"
/**
 * print_sign - Entry point
 * @n: is an integer
 * Return: return 1 if n is positive, return 0 if n is 0, otherwise return -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}

}
