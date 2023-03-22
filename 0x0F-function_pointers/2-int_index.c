#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 *int_index - Entry point
 *@array: array
 *@size:size of array
 *@cmp:pointer to function
 * Return: if element exists return it's index otherwise return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
