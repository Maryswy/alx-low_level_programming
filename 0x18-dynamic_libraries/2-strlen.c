#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: char input
 * Return: length of the input string
 * sl: is the variable name of the string
 */

int _strlen(char *s)
{
	int sl;

	for (sl = 0; s[sl] != '\0'; sl++)
	{}

	return (sl);
}
