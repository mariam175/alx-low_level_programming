#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 *listint_len - ...
 *@h:list
 *Return: length of list
 */
size_t listint_len(const listint_t *h)
{
	int c = 0;

	while (h)
	{
		h = h->next;
		c++;
	}
	return (c);
}
