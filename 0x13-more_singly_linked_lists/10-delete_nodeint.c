#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 *delete_nodeint_at_index- ...
 *@head:head of list
 *@index:...
 *Return:1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr = *head, *del;
	unsigned int cnt = 0;

	if (head == NULL)
		return (-1);
	while (curr && cnt != index - 1)
	{
		curr = curr->next;
		cnt++;
	}
	if (index != 0 && cnt != index - 1)
		return (-1);
	if (index == 0)
	{
		del = *head;
		*head = del->next;
		free(del);
		return (1);
	}
	else
	{
		del = curr->next;
		curr->next = del->next;
		free(del);
		return (1);
	}
}
