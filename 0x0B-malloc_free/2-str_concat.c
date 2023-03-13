#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *str_concat - Entry point
 *@s1: string
 *@s2: string
 * Return: pointer should point to a newly allocated space in memory
 * contains the two strings
 */


char *str_concat(char *s1, char *s2)
{
	int i, j, k, l;
	char *con;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	con = malloc(sizeof(char) * (i + j + 1));
	if (con == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		con[k] = s1[k];
	for (k = i, l = 0; k < j; k++, l++)
		con[k] = s2[l];
}
