#include <stdio.h>
#include <stdlib.h>
#include "main.h"
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
		if (!atoi(argv[i]))
		{
			printf("%s\n", "Error");
			return (1);
		}
		res += atoi(argv[i]);
	}
	printf("%d\n", res);
	return (0);
}
