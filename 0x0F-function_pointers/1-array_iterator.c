#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 *array_iterator - ...
 *@array: array
 *@size:size of array
 *@action:pointer to function
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action && array)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
