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

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
