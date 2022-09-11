#include <stdio.h>

/**
 * main - prints numbers of base 16 in lowercase.Only use putchar
 * Return: 0
 */

int main(void)
{
char item;
for (item = '0'; item <= '9'; item++)
putchar(item);
for (item = 'a'; item <= 'f'; item++)
putchar(item);
putchar('\n');
return (0);
}
