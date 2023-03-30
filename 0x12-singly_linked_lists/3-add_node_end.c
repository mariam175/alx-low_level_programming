#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 *add_node_end - ...
 *@head:head of the linked list
 *@str:...
 *Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *last = *head;
	int l = 0;

	for (l = 0; str[l] != '\0'; l++)
		;
	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	node->str = strdup(str);
	node->len = l;
	node->next = NULL;

	if (head == NULL)
	{
		*head = node;
		return (node);
	}
	while (last->next != NULL)
		last = last->next;
	last->next = node;
	return (node);
}
