#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a memory in a list
 * @head: A pointer to the first node of the list to free
 * Return: Always 0 (success)
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (!(head && *head))
		return;

	while (*head != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
}

