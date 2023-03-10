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
	int i = 0;

	for (; i < argc; i++)
		;
	return (i - 1);
}
