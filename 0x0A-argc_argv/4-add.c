#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"
/**
 * main - Entry point
 *@argc:number of arguments
 *@argv:array point to arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
		printf("%d\n", 0);
	else
	{
		int i, res = 0;

		for (i = 1; i < argc; i++)
		{
			int j = 0;

			for (; j < strlen(argv[i]); i++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			res += atoi(argv[i]);
		}
		printf("%d\n", res);
	}
	return (0);
}
