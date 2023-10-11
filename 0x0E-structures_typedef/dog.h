#ifndef DOG_H
#define DOG_H

/**
* struct dog - a dog's basic info
* @name: dog's name
* @age: dog's age
* @owner: owner's name
*
* Description: just a long dog struct in a big kitty world
*/
struct dog
{
		char *name;
		float age;
		char *owner;
};

typedef struct dog dog_t

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
