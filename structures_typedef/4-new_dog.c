#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Crée un nouveau chien.
 * @name: Nom du chien.
 * @age: Âge du chien.
 * @owner: Propriétaire du chien.
 *
 * Return: Pointeur vers la nouvelle structure dog_t, ou NULL en cas d'échec.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *name_copy, *owner_copy;
	int name_len = 0, owner_len = 0, i;

	while (name[name_len] != '\0')
		name_len++;

	while (owner[owner_len] != '\0')
		owner_len++;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	name_copy = malloc(name_len + 1);
	if (name_copy == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	owner_copy = malloc(owner_len + 1);
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(new_dog);
		return (NULL);
	}


	for (i = 0; i <= name_len; i++)
		name_copy[i] = name[i];


	for (i = 0; i <= owner_len; i++)
		owner_copy[i] = owner[i];


	new_dog->name = name_copy;
	new_dog->age = age;
	new_dog->owner = owner_copy;

	return (new_dog);
}
