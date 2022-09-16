#include "main.h"

/**
 * print_numbers - a function that prints numbers from 0-9
 * Return: 0-9 followed by new line
 */

void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '10'; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
