#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: Always 0 (success)
 */

char *_strdup(char *str)
{
	int i, end;
	char *array;

	if (str == NULL)
		return (NULL);
	for (end = 0; end <= *str; end++)
	{
	}

	end += 1;
	array = malloc(sizeof(char) * end);

	for (i = 0; i < end; i++)
		array[i] = str[i];
	if (array == NULL)
		return (NULL);
	return (array);
}

