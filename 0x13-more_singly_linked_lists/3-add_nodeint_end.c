#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 *add_nodeint_end - ...
 *@head:head of list
 *@n:value of new node
 *Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *last = *head;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;
	if (*head == NULL)
	{
		*head = ptr;
		return (ptr);
	}
	while (last->next)
		last = last->next;
	last->next = ptr;
	return (ptr);
}
