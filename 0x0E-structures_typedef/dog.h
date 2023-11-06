#ifndef DOG_H_
#define DOG_H_

/**
 *struct dog - a new struct that creates a dog info
 *
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * description: a struct with muliple data types
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
