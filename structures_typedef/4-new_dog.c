#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

int length(char *s);

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
	/*find length of name*/
	n_length = length(name);

	/*allocate enough memory for name*/
	new_dog->name = malloc(n_length * sizeof(char *));

	/*check malloc worked*/
	if (new_dog->name == NULL)
		return (NULL);

	/*copy each element in name to new_dog->name*/
	i = 0;
	while (name[i] != '\0')
	{
		new_dog->name[i] = name[i];
		i++;
	}
	/*add null term at the end of string*/
	new_dog->name[i] = '\0';

	/*find length of owner*/
	o_length = length(owner);

	/*allocate enough memory for owner*/
	new_dog->owner = malloc(o_length * sizeof(char *));

	/*check malloc worked*/
	if (new_dog->owner == NULL)
		return (NULL);

	/*copy each element of owner to new_dog->owner*/
	j = 0;
	while (owner[j] != '\0')
	{
		new_dog->owner[j] = owner[j];
		j++;
	}
	/*add null term to end of string*/
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
