#include "main.h"

/**
 * main - prints lowercase, can only use the _putchar twice
 * Return: 0
 */

void print_alphabet(void);
{
	int l = 'a';

	while (l <= 'z')
	{
		_putchar(l);
		l += 1;
	}
	_putchar(10);
	return (0);
}
