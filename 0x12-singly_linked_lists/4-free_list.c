#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 *free_list - ...
 *@head:head of the linked list
 *Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *ptr;

	while (head)
	{
		ptr = head;
		head = head->next;
		free(ptr->str);
		free(ptr);
	}
}
