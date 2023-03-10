#include <stdio.h>
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
			if (isdigit(argv[i]))
				res += atoi(argv[i]);
			else
				printf("%s\n", "Error");
		}
		printf("%d\n", res);
	}
	return (0);
}
