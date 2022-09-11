#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 (Success)
 */

int main(void)
{
	int item;

	for (item = '0'; item <= '9'; item++)
	{
		putchar(item);
		if (item != 'q')
		{
			putchar(' , ');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
