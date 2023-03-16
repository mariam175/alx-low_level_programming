#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *_realloc - Entry point
 *@ptr:is a pointer to the memory previously allocated
 *@old_size:is the size, in bytes, of the allocated space for ptr
 *@new_size:is the new size, in bytes of the new memory block
 * Return: ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		ptr = malloc(new_size);
	if (new_size == old_size)
		return (ptr);
	free(ptr);
	ptr = malloc(new_size);
	return (ptr);
}
