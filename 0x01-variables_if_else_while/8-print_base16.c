#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char hex[15] = "0123456789abcdef";

	for (i = 0; i < 15; i++)
	{
		putchar(hex[i]);
	}
	putchar('\n');
	return (0);
}
