#include <stdio.h>
#include "main.h"
/**
 * _strspn - Entry point
 *@s: string
 *@accept: string
 * Return: length of substring
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (len != i)
			break;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
				len++;
		}
	}
	return (len);
}
