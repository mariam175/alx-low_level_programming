#include <stdio.h>
#include "main.h"
/**
 * rev_string - Entry point
 * @s: string
 * Return: Always 0 (Success)
 */
void rev_string(char *s)
{
	int len = 0, i;
	char temp;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
