#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 *print_listint - ...
 *@h:list
 *Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int c = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		c++;
	}
	return (c);
}
