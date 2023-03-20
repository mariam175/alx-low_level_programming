#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 *new_dog - Entry point
 *@name: name of the dog
 *@age: age of the dog
 *@owner: owner of the dog
 * Return: struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int lena, leno, i;
	char *nm;
	char *ow;
	dog_t *nedog;

	nedog = malloc(sizeof(dog_t));
	if (name == NULL)
		return (NULL);
	if (nedog == NULL || age <= 0 || owner == NULL)
	{
		free(nedog);
		return (NULL);
	}
	for (lena = 0; name[lena] != '\0'; lena++)
		;
	for (leno = 0; owner[leno] != '\0'; leno++)
		;
	nm = malloc(sizeof(char) * (lena + 1));
	if (nm == NULL)
	{
		free(nedog);
		return (NULL);
	}
	ow = malloc(sizeof(char) * (leno + 1));
	if (ow == NULL)
	{
		free(nm);
		free(nedog);
		return (NULL);
	}
	for (i = 0; i < lena; i++)
		nm[i] = name[i];
	nm[i] = '\0';
	for (i = 0; i < leno; i++)
		ow[i] = owner[i];
	ow[i] = '\0';
	nedog->name = nm;
	nedog->age = age;
	nedog->owner = ow;
	return (nedog);
}
