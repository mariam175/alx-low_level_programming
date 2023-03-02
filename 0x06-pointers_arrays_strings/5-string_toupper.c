#include <stdio.h>
#include "main.h"
/**
 * string_toupper - Entry point
 * @s: string
 * Return: uppercase of string
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
		}
	}
	return (s);
}
