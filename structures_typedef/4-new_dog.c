#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

int length(char *s);
void free_dog(dog_t *dog);

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: null if function fails or new_dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j, n_length, o_length;

	dog_t *new_dog = malloc(sizeof(struct dog));

	if (new_dog == NULL)
		return (NULL);

	/*find length of name and owner*/
	n_length = length(name);
	o_length = length(owner);

	/*allocate enough memory and check malloc worked, free dog if malloc failed*/
	new_dog->name = malloc(n_length * sizeof(char *));
	if (new_dog->name == NULL)
	{
		free_dog(new_dog);
		return (NULL);
	}

	new_dog->owner = malloc(o_length * sizeof(char *));
	if (new_dog->owner == NULL)
	{
		free_dog(new_dog);
		return (NULL);
	}

	/*copy each element to new_dog-> and add null term at the end of string*/
	i = 0;
	while (name[i] != '\0')
	{
		new_dog->name[i] = name[i];
		i++;
	}
	new_dog->name[i] = '\0';

	j = 0;
	while (owner[j] != '\0')
	{
		new_dog->owner[j] = owner[j];
		j++;
	}
	new_dog->owner[j] = '\0';

	new_dog->age = age;

	return (new_dog);
}
/**
 * length - find length of string
 * @s: pointer to string
 * Return: length of string or 0 if string is 0
 */
int length(char *s)
{
	int i;

	if (s == 0)
		return (0);
	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
/**
 * free_dog - frees each dog if malloc fails
 * @dog: pointer to dog
 * Return: nothing/ void
 */
void free_dog(dog_t *dog)
{
	if (dog->name != NULL)
		free(dog->name);
	if (dog->owner != NULL)
		free(dog->owner);
	free(dog);
	dog = NULL;
}
