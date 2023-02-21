#include <stdio.h>
#include "main.h"
/**
 * times_table - Entry point
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		_putchar(0 + '0');
		_putchar(',');
		for (j = 1; j < 10; j++)
		{
			int m;

			m = i * j;
			if ((m / 10) > 0)
			{
				_putchar(' ');
				_putchar((m / 10) + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
			}
			_putchar((m % 10) + '0');
			if (j != 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
