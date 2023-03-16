#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *_calloc - Entry point
 *@nmemb:int
 *@size:int
 * Return: Nothing
 */


void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		arr[i] = 0;
	return (arr);
}
