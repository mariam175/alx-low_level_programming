#include <stdio.h>
#include "main.h"
/**
 * puts_half - Entry point
 * @str: string
 * Return: Always 0 (Success)
 */
void puts_half(char *str)
{
	int len = 0, i, n;

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	n = len / 2;
	if (len % 2 != 0)
	{
		n = (len - 1) / 2;
	}
	for (i = n; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
