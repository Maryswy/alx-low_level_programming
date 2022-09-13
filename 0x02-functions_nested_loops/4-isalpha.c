#include "main.h"

/**
 * _isalpha - checks for alphabetical letters
 * @c: a character to be checked on
 * Return: return 0 or 1 depending on condition
 */

int _isalpha(int c)
{
	if (((c >= 'a')  && (c <= 'z'))  || ((c  >= 'A')  && (c <= 'Z'))
			return (1);
			else
			return (0);
}
