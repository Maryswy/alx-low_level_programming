#include <stdio.h>
#include <stdlib.h>
include <time.h>

/**
 * main-entry
 * return:Always 0 (Success)
 */

int main(Void)

{
	char ch;
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'e' || ch == 'q')
			continue;
		else putchar(ch);
	}
	putchar('\n');
	return (0);
}
