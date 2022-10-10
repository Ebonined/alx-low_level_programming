#include "dog.h"

/**
 * init_dog - function to initialize dog structure
 * @d: point to dog structure
 * @name: name parameter for dog structure
 * @age: age parameter for dog structure
 * @owner: owner parameter for dog structure
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
