#include <stdio.h>
#include "main.h"
/**
 * print_array - Entry point
 * @a: array
 * @n : number of element
 * Return: Always 0 (Success)
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}
	prinf("\n");
}
