#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *malloc_checked - Entry point
 *@b: int
 * Return: Nothing
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
