#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *_strdup - Entry point
 *@str: string
 * Return: a pointer to a new string which is a duplicate of the string str
 */
char *_strdup(char *str)
{
	int len, i;
	char *dup;

	if (str == NULL)
		return (NULL);
	for (len = 0; str[len] != '\0'; len++)
		;
	dup = malloc(len * sizeof(char));
	for (i = 0; i < len; i++)
		dup[i] = str[i];
	if (dup == NULL)
		return (NULL);
	return (dup);
}
