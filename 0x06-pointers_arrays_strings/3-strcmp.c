#include <stdio.h>
#include "main.h"
/**
 * _strcmp - Entry point
 * @s1: string
 * @s2: string
 * Return: diff of two different characters
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			break;
	}
	return ((int)s1[i] - (int)s2[i]);
}
