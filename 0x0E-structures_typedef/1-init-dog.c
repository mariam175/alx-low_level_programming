#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 *init_dog - Entry point
 *@d: struct
 *@name: name of the dog
 *@age: age of the dog
 *@owner: owner of the dog
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
