#include "main.h"
/**
 * _isalpha - Entry point
 * @c: is a single letter
 * Return: return 1 if is alpha otherwise return 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
