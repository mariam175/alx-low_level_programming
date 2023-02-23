#include <stdio.h>
#include "main.h"
/**
 * _isdigit - Entry point
 *@c: integer
 * Return: 1 if it is digit, otherwise 0
 */
int _isdigit(int c)
{
	if (c <= 48 && c >= 57)
	{
		return (1);
	}
	return (0);
}
