#include "main.h"

/**
 * _islower - a function that checks if the character is lowercase
 * @c: single character input
 * Return: returns 1 and 0 dependig on condition
 */


int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
