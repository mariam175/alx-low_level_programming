#include <stdio.h>
#include "main.h"
/**
 * _strncat - Entry point
 * @dest: string
 * @src: string
 * @n: integer
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	int len, i;

	for (len = 0; dest[len] != '\0'; len++)
		;
	for (i = 0; i < n; i++)
	{
		dest[len + i] = src[i];
	}
	return (dest);
}
