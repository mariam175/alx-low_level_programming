#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 *insert_nodeint_at_index- ...
 *@head:head of list
 *@idx:...
 *@n:data of new node
 *Return:the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *curr = *head;
	unsigned int cnt = 0;

	if (head == NULL)
		return (NULL);
	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	while (curr && cnt != idx - 1)
	{
		curr = curr->next;
		cnt++;
	}
	if (idx != 0 && cnt != idx - 1)
		return (NULL);

	if (idx == 0)
	{
		ptr->next = *head;
		*head = ptr;
	}
	else
	{
		ptr->next = curr->next;
		curr->next = ptr;
	}
	return (ptr);
}
