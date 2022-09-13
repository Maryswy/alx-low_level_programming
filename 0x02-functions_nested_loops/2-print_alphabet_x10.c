#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase alphabet
 * Return: x10 a-z
 */

void print_alphabet_x10(void)
{
	int n, low;

	low = 0;
	while (low < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		low++;
		_putchar('\n');
	}
}
