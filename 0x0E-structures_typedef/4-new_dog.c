#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - creates new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: a dog object
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int d, poppy1, poppy2;
	dog_t *ndog;
	char *a, *b;

	poppy1 = 0;
	for (d = 0; name[d] != '\0'; d++)
		poppy1++;
	poppy2 = 0;
	for (d = 0; owner[d] != '\0'; d++)
		poppy2++;
	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);
	a = malloc((poppy1 + 1) * sizeof(char));
	if (a == NULL)
	{
		free(ndog);
		return (NULL);
	}
	for (d = 0; d < poppy1; d++)
		a[d] = name[d];
	a[d] = '\0';
	ndog->name = a;
	ndog->age = age;
	b = malloc((poppy2 + 1) * sizeof(char));
	if (b == NULL)
	{
		free(a);
		free(ndog);
		return (NULL);
	}
	for (d = 0; d < poppy2; d++)
		b[d] = owner[d];
	b[d] = '\0';
	ndog->owner = b;
	return (ndog);
}

