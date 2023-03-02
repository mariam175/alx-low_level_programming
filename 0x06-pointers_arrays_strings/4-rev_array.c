#include <stdio.h>
#include "main.h"
/**
 * reverse_array - Entry point
 * @a: array
 * @n: number of elements
 * Return: Always 0 (Success)
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = n - 1; i >= 0; i--)
	{
		_putchar(a[i] + '0');
		if (i != 0)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
