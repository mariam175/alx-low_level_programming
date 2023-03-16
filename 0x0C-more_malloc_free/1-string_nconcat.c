#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *string_nconcat- Entry point
 *@s1:string
 *@s2:string
 *@n: int
 * Return: string contains s1 and first n characters from s2
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *con;
	unsigned int i, j, len, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	if (j <= n)
		len = i + j;
	else
		len = i + n;
	con = malloc(sizeof(char) * (len + 1));
	if (con == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
	{
		con[k] = s1[k];
	}
	for (j = 0; k < len; j++,  k++)
		con[k] = s2[j];
	return (con);
}
