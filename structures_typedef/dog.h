#ifndef _dog_h_
#define _dog_h_

/**
 * struct dog - Define a new type struct dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */

typedef struct dog

{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
