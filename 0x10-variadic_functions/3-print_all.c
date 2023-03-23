#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *print_all - ...
 *@format:list of types of arguments passed to the function
 *Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list ptr;
	unsigned int i, f = 0, j;
	char *form = "cifs";

	va_start(ptr, format);
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (form[j])
		{
			if ((form[j] == format[i]) && f)
				printf(", ");
			j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ptr, int)), f = 1;
				break;
			case 'i':
				printf("%d", va_arg(ptr, int)), f = 1;
				break;
			case 'f':
				printf("%f", va_arg(ptr, float)), f = 1;
				break;
			case 's':
				char *s = va_arg(ptr, char *);

				if (s == NULL)
					printf("(nil)");
				else
					prinf("%s", s);
				f = 1;
				break;
		}
		i++;
	}
	printf("\n");
	va_end(ptr);
}
