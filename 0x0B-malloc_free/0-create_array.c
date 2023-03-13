#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * create_array - Entry point
 *@size: unsigned integer
 *@c: char
 * Return: number
 */


char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = malloc(size * sizeof(char));
	if (size == 0 || arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = c;
	arr[i] = '\0';
	return (arr);
}
