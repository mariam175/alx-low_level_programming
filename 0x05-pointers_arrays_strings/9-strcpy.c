#include <stdio.h>
#include "main.h"
/**
 * _strcpy - Entry point
 * @dest: string
 * @src : string
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
