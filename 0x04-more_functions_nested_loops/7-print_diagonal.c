#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - Entry point
 *@n: integer
 * Return: Always 0 (Success)
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_puchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
