#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 *binary_to_uint- ...
 *@b: ....
 *Return:the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	int len = 0, pow = 0, i;

	if (b == NULL)
	{
		return (0);
	}
	for (len = 0; b[len] != '\0'; len++)
		;
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '0' || b[i] != '1')
			return (0);

		if (b[i] == '1')
			res += 1 << pow;
		pow++;
	}
	return (res);
}
