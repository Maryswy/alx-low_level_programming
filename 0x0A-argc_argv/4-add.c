#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry Point
 * @argc: Number of arguments
 * @argv: array pointing to arguments
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc < 1)
		return (0);

	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("%s\n", "Error");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}

