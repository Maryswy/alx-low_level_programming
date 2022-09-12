#include "main.h"

/**
 * main - prints alphabets in lowercase 10 times
 * Return: 0
 */

void print_alphabet_x10(void);
{
	int l;
	int n = 0;

	while (n < 10)
	{
		l = 'a';
		while (l <= 'z')
		{
			_putchar(l);
			l += 1;
		}
		_putchar(10);
		n += 1;
	}
	return (0);
}
