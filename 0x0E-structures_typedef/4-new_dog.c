#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
* new_dog - Function that creates a new dog.
* @name: type pointer char name.
* @age: type pointer float age
* @owner: type pointer char owner
* Return: 0.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
		struct dog *jango;
		char *i, *j;
		int x, y, z;

		jango = malloc(sizeof(struct dog));
		if (jango == NULL)
		return (NULL);

		for (x = 0; *(name + x) != '\0'; x++)
			;
		for (y = 0; *(owner + y) != '\0'; y++)
			;
		i = malloc(sizeof(char) * x + 1);
		if (i == NULL)
		{
			free(jango);
			return (NULL);
		}
		j = malloc(sizeof(char) * y + 1);
		if (j == NULL)
		{
			free(i);
			free(jango);
			
			return (NULL);
		}
		for (z = 0; z <= x; z++)
		*(i + z) = *(name + z);
		for (z = 0; z <= y; z++)
		*(j + z) = *(owner + z);

		jango->name = i;
		jango->age = age;
		jango->owner = j;

		return (jango);
}
