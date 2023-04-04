#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 *add_nodeint - ...
 *@head:head of list
 *@n:value of new node
 *Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	if (head == NULL)
		return (NULL);
	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (ptr);

}
