#include <stdio.h>
#include "main.h"
/**
 *  _strlen - Entry point
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
	int len, i;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}
