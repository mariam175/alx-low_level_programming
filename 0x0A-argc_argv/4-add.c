#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
 * is_string - Entry point
 *@s:string
 * Return: is string or not
 */

int is_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (!isdigit(s[i]))
			return (0);
	}
	return (1);
}

/**
 * main - Entry point
 *@argc:number of arguments
 *@argv:array point to arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, res = 0;

	if (argc < 1)
		return (0);
	for (i = 1; i < argc; i++)
	{
		if (!is_string(argv[i]))
		{
			printf("%s\n", "Error");
			return (1);
		}
		res += atoi(argv[i]);
	}
	printf("%d\n", res);
	return (0);
}
