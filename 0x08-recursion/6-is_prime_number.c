#include <stdio.h>
#include "main.h"
int is_prime(int n, int i);
/**
 * is_prime_number- Entry point
 *@n: integer
 * Return: is prime or not
 */
int is_prime_number(int n)
{
	return (is_prime(n, n - 1));
}
/**
 * is_prime- Entry point
 *@n: integer
 *@i: integer
 * Return: is prime or not
 */
int is_prime(int n, int i)
{
	if (i < 2)
		return (0);
	else if (i == 2 || i == 3)
		return (1);
	else if (n % i == 0)
		return (0);
	return (is_prime(n, i - 1));
}
