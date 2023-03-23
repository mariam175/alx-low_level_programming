#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *print_numbers - ...
 *@separator:....
 *@n:...
 *Return: ....
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;
	int s;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(ptr, int);
		printf("%d", s);
		if (i < n - 1)
		{
			if (separator)
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ptr);
}
