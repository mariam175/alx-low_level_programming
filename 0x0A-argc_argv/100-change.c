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
	int coin;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}
	int m = argv[1];

	while (m)
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
