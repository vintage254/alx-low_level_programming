#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print the struct declared for the dog d
 * @d: the new dog d of type truct
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	printf("Name: ");
	if (d->name == NULL)
	{
		printf("(nil)\n");
	}
	else
	{
		printf("%s\n", d->name);
	}
	printf("Age: ");
	if (d->age < 0)
	{
		printf("(nil)\n");
	}
	else
	{
		printf("%.2f\n", d->age);
	}
	printf("Owner: ");
	if (d->owner == NULL)
	{
		printf("(nil)\n");
	}
	else
	{
		printf("%s\n", d->owner);
	}
}

