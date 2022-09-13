#include "main.h"

/**
 * print_alphabet - prints the lowercase alphabets
 * Return: 0 if successful
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}

