#include <stdio.h>
#include <stdlib.h>
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
	int coin = 0, m = 0;

	if (argc == 2)
	{
		m = atoi(argv[argc - 1]);

		while (m > 0)
		{
			if (m >= 25)
			{
				m -= 25;
			} else if (m >= 10)
			{
				m -= 10;
			} else if (m >= 5)
			{
				m -= 5;
			} else if (m >= 2)
			{
				m -= 2;
			} else
			{
				m--;
			}
			coin++;
		}
		printf("%d\n", coin);
		return (0);
	}
	printf("Error\n");
	return (1);
}
