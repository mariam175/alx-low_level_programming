#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - Entry point
 *@a: array
 *@size:integer
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int i, sum_main = 0, sum_off = 0;

	for (i = 0; i < size; i++)
	{
		sum_main += a[(size + 1) * i];
		sum_off += a[(size - 1) * (i + 1)];
	}
	printf("%d, %d\n", sum_main, sum_off);
}
