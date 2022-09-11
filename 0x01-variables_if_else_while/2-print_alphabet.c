#include <stdio.h>
#include <stdlib.h>

/**
 * main-Entry
 * Return:0 if Successful
 */

int main(void)
{
	char start;

	for (start = 'a'; start <= 'z'; start++)
	{
		putchar(start);
	}
	putchar('\n');
	return (0);
}
