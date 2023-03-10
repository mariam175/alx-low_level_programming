#include "main.h"
/**
 * _islower - Entry point
 * @c: is single letter
 * Return: return 1 if lowercase, otherwise 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
