#include "lists.h"

/**
 * add_node - Entry Point (Adds a node)
 * @head: input
 * @str: string
 * Return: Always 0
 */

list_t *add_node(list_t **head, const char *str)
{
	int i, count = 0;
	list_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		count++;

	new->len = i;
	new->str = strdup(str);
	new->next = *head;
	*head = new;

	return (new);
}

