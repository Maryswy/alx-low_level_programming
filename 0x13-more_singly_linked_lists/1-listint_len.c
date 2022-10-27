#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - main entry point
 * @h: name of the list
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	if (h)
	{
		return (1 + listint_len(h->next));
	}
	return (0);
}

