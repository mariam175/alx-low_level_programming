#include <stdio.h>
#include "main.h"
/**
 * print_square - Entry point
 *@size: integer
 * Return: Always 0 (Success)
 */
void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
