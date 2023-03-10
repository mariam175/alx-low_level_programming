#include <stdio.h>
#include "main.h"
/**
 * _atoi- Entry point
 *@s:string
 * Return: number
 */

int _atoi(char *s)
{
	int num = 0, i;

	for (i = 0; s[i] != '\0'; i++)
	{
		num = num * 10 + s[i] - '0';
	}
	return (num);
}
