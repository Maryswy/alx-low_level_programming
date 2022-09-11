#include <stdio.h>

/**
 * main - prints numbers of base 16 in lowercase.Only use putchar
 * Return: 0
 */

int main(void)
{
int n = 48;
int l = 'a';
while (n <= 57)
{
putchar(n);
n + 1;
}
while (l <= 'f')
{
putchar(l);
l++;
}
putchar('\n');
return (0);
}
