#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 *add_node - ...
 *@head:head of the linked list
 *@str:...
 *Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	int l = 0;

	for (l = 0; str[l] != '\0'; l++)
		;
	node = malloc(sizeof(list_t));

	if (node == NULL)
		return (NULL);
	node->str = strdup(str);
	node->len = l;
	node->next = *head;
	*head = node;
	return (node);
}
