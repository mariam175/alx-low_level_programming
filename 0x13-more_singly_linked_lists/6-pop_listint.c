#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 *pop_listint- ...
 *@head:head of list
 *Return: the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *curr, *ptr;
	int data = 0;

	if (head == NULL)
		return (0);

	curr = *head;
	data = curr->n;
	ptr = curr->next;
	free(curr);
	*head = ptr;
	return (data);
}
