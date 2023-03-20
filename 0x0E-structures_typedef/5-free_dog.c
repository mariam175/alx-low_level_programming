#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 *free_dog - Entry point
 *@d: struct
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
		free(d);
}
