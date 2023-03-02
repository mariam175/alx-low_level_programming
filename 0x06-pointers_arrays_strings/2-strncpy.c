#include <stdio.h>
#include "main.h"
/**
 * _strncpy - Entry point
 * @dest: string
 * @src: string
 * @n: integer
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; src[i] != '\0'; i++)
	{
		if (i < n)
		{
			dest[i] = src[i];
		}
	}
	for (; i < n; i++)
		dest[i] = '*';
	dest[i] = '\0';
	return (dest);
}
