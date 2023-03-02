#include <stdio.h>
#include "main.h"
/**
 * cap_string - Entry point
 * @s: string
 * Return: uppercase of string
 */
char *cap_string(char *s)
{
	char sepa[] = {' ', '\t', '\n', ',', ';', '.', '!', '?'
		, '"', '(', ')', '{', '}'};
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{6
		for (j = 0; j < 13; j++)
		{
			if ((i == 0 || s[i - 1] == sepa[j]) && (s[i] >= 'a' && s[i] <= 'z'))
				s[i] -= 32;
		}
	}
}
