#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char str[26] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;
	int j = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 26; j++)
		{
			_putchar(str[j]);
		}
		_putchar('\n');
	}

}
