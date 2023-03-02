#include <stdio.h>
#include "main.h"
/**
 * leet - Entry point
 * @s: string
 * Return: string
 */
char *leet(char *s)
{
	char ch[] = {'a', 'e', 'o', 't', 'l'};
	char num[] = {'4', '3', '0', '7', '1'};
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == ch[j] || s[i] == ch[j] - 32)
				s[i] = num[j];
		}
	}
	return (s);
}
