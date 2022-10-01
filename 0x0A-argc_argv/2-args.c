#include  "main.h"
#include <stdio.h>

/**
 * main - Entry Point
 * @argc: number of arguments
 * @argv: array pointing to arguments
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}

