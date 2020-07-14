#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * print_dog - function that prints a struct dog
  * @d: pointer to struct dog
  * Return: Nothing
  */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
		if d->name)
		d->name = ("nill");
	printf("Name: %s\nAge: %f\nOwner: %s\n", (*d).name, (*d).age, (*d).owner);
}
