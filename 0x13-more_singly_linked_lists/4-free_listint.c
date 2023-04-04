#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 *free_listint- ...
 *@head:head of list
 *Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
	free(head);
}
