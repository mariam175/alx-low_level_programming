#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 *free_listint2- ...
 *@head:head of list
 *Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr, *curr;

	if (head != NULL)
	{
		curr = head;
		while (curr)
		{
			ptr = curr;
			curr = curr->next;
			free(ptr);
		}
		*head = NULL;
	}
}
