#include <stdio.h>
#include "main.h"
/**
 * _puts - Entry point
 *@str: string
 * Return: Always 0 (Success)
 */
void _puts(char *str)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
