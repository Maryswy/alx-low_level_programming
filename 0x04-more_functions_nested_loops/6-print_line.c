#include "main.h"

/**
 * print_line - prints a line
 *
 * @n: input
 */

void print_line(int n)
{
	int line;

	for (line = 0; line < n; line++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
