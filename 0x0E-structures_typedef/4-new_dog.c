#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - function to create new dog_t
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: dog_t*
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int a, b, i;
	dog_t *output;

	if (name == NULL || owner == NULL)
		return (NULL);
	output = malloc(sizeof(dog_t));
	if (output == NULL)
		return (NULL);
	for (a = 0; name[a]; a++)
		;
	a++;
	output->name = malloc(a * sizeof(char));
	if (output->name == NULL)
	{
		free(output);
		return (NULL);
	}
	for (i = 0; i < a; i++)
		output->name[i] = name[i];
	output->age = age;
	for (b = 0; owner[b]; b++)
		;
	b++;
	output->owner = malloc(b * sizeof(char));
	if (output->owner == NULL)
	{
		free(output->name);
		free(output);
		return (NULL);
	}
	for (i = 0; i < b; i++)
		output->owner[i] = owner[i];
	return (output);
}
