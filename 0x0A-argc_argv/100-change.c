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
	int coin = 0, m;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (strchr(argv[argc - 1], '-'))
	{
		printf("0\n");
		return (1);
	}
	m = atoi(argv[1]);

	while (m > 0)
	{
		if (m % 25 == 0)
			m -= 25;
		else if (m % 10 == 0)
			m -= 10;
		else if (m % 5 == 0)
			m -= 5;
		else if (m % 2 == 0)
			m -= 2;
		else
			m--;
		coin++;
	}
	printf("%d\n", coin);
	return (0);
}
