#include <stdio.h>
#include "main.h"
int palindrome(char *s, int l, int r);
/**
 * is_palindrome - Entry point
 *@s: string
 * Return: is palindrom or not
 */
int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	if (len == 0)
		return (1);
	return (palindrome(s, 0, len - 1));
}

/**
 *palindrome - Entry point
 *@s:string
 *@l: integer
 *@r: integer
 * Return: is palindrom or not
 */
int palindrome(char *s, int l, int r)
{
	if (l == r)
		return (1);
	if (s[l] != s[r])
		return (0);
	if (l < r)
		return (palindrome(s, l + 1, r - 1));
	return (1);
}
