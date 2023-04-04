#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 *sum_listint- ...
 *@head:head of list
 *Return: sum of all the data (n) of a listint_t linked list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
