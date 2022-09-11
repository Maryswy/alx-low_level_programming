#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int item;

	for (item = '0'; item <= '9'; item++)
	{
		putchar(item);
		if (item != '9')
		{
			putchar(',');
			putchar('');
		}
	}
	putchar('\n');
	return (0);
}

