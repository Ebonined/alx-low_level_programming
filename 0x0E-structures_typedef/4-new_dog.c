#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

int getlen(char *s);
void _strcopy(char *s1, char *s2);

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
	dog_t *output;

	if (name == NULL || owner == NULL)
		return (NULL);

	output = malloc(sizeof(dog_t));
	if (output == NULL)
	{
		return (NULL);
	}

	output->name = malloc(sizeof(char) * getlen(name));

	if (output->name == NULL)
	{
		free(output);
		return (NULL);
	}
	_strcopy(output->name, name);
	output->age = age;

	output->owner = malloc(sizeof(owner[0]) * getlen(owner));
	if (output->owner == NULL)
	{
		free(output->name);
		free(output);
		return (NULL);
	}
	_strcopy(output->owner, owner);

	return (output);
}

/**
 * getlen - get length of string
 *
 * @s: string
 * Return:int
 */
int getlen(char *s)
{
	int i = 0;

	while (*(s + i))
	{
		i++;
	}

	return (i);
}

/**
 * _strcopy - copy string from s2 to s1
 * @s1: destination
 * @s2: source
 */
void _strcopy(char *s1, char *s2)
{
	int i = 0;

	while (*(s2 + i))
	{
		s1[i] = s2[i];
		i++;
	}
}
