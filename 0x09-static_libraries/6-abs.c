#include "main.h"
/**
 * _abs - Entry point
 * @n: integer
 * Return: the absolute value of number
 */
int _abs(int n)
{
	if (n < 0)
	{
		int r;

		r = -1 * n;
		return (r);
	}
	return (n);

}
