#include <stdio.h>
#include "main.h"
/**
 * print_rev - Entry point
 * @s: string
 * Return: Always 0 (Success)
 */
void print_rev(char *s)
{
	int len, i;

	len = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
