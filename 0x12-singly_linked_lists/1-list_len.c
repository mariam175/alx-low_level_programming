#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 *list_len - ...
 *@h:linked list
 *Return: length of list
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
