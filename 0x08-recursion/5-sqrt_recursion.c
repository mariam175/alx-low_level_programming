#include <stdio.h>
#include "main.h"
int sqrtt(int n, int x);
/**
 * _sqrt_recursion - Entry point
 *@n: integer
 * Return: sqrt of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrtt(n, (n + 1) / 2));
}
/**
 * sqrtt - Entry point
 *@n: integer
 *@x: integer
 * Return: sqrt
 */
int sqrtt(int n, int x)
{
	if (x * x < 1)
		return (-1);
	if (x * x == n)
		return (x);
	return (sqrtt(n, x - 1));
}
