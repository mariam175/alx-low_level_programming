#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *@argc:number of arguments
 *@argv:array point to arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
