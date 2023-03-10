#include <stdio.h>
#include "main.h"
/**
 * _strstr - Entry point
 *@haystack: string
 *@needle: string
 * Return: string
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *fi = haystack;
		char *sec = needle;

		while (*fi == *sec && *sec != '\0')
		{
			fi++;
			sec++;
		}
		if (*sec == '\0')
			return (haystack);
		haystack++;
	}
	return (NULL);
}
